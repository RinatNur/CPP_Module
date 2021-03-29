//
// Created by Rinat Nurutdinow on 3/25/21.
//

#include "Convert.hpp"

Convert::Convert(const std::string& szStr) : szStr_(szStr), type_(NONE), cValue_(-2){

	std::stringstream ss;
	for (int i = 0; i < 4; ++i)
		this->impossible[i] = -1;
	ss << this->szStr_;
	this->parser();
	if (isNanOrInf(ss))
	{
		this->isNanOrInf_ = true;
		return;
	}
	if (checkOverflow())
	{
		this->type_ = NONE;
		std::cout << "Unknown type" << std::endl;
		return;
	}
	switch (this->type_)
	{
		case NONE:
			this->type_ = NONE;
			std::cout << "Unknown type" << std::endl;
			break;
		case INT:
			if (!(ss >> this->iValue_))
			{
				std::cout << "Unknown type" << std::endl;
				this->type_ = NONE;
				break;
			}
			this->fromInt();
			break;
		case CHAR:
			ss >> this->cValue_;
			this->fromChar();
			break;
		case DOUBLE:
			if (!(ss >> this->dValue_))
			{
				std::cout << "Unknown type" << std::endl;
				this->type_ = NONE;
				break;
			}
			this->fromDouble();
			break;
		case FLOAT:
			this->fromFloat();
			break;
	}
}

Convert::Convert(const Convert & copy_obj) {
	operator=(copy_obj);
}

Convert &Convert::operator=(const Convert& obj) {
	if (this == &obj)
		return *this;
	this->szStr_ = obj.szStr_;
	this->type_ = obj.type_;
	for (int i = 0; i < 4; ++i)
		this->impossible[i] = obj.impossible[i];
	this->isNanOrInf_ = obj.isNanOrInf_;
	this->iValue_ = obj.iValue_;
	this->dValue_ = obj.dValue_;
	this->fValue_ = obj.fValue_;
	this->cValue_ = obj.cValue_;
	return *this;
}

Convert::~Convert() {}

void Convert::parser() {
	std::stringstream ss;
	size_t		i = 0;
	size_t 		len = this->szStr_.size();
	if (len == 1 && !isdigit(this->szStr_[0]))
	{
		this->cValue_ = static_cast<char>(this->szStr_[0]);
		this->type_ = CHAR;
		return;
	}
	if (this->szStr_[0] == '-' || this->szStr_[0] == '+')
		ss << this->szStr_[i++];
	this->type_ = INT;
	for (; i < len; ++i)
	{
		if (this->szStr_[i] == '.')
			this->type_ = DOUBLE;
		if (this->szStr_[i] == 'f')
		{
			this->type_ = FLOAT;
			break;
		}
		ss << this->szStr_[i];
	}
}

std::string Convert::getType() const {
	if (this->type_ == INT)
		return "int";
	if (this->type_ == CHAR)
		return "char";
	if (this->type_ == DOUBLE)
		return "double";
	if (this->type_ == FLOAT)
		return "float";
	return "invalid";
}

int Convert::getIvalue() const {
	return this->iValue_;
}

double Convert::getDvalue() const {
	return this->dValue_;
}

float Convert::getFvalue() const {
	return this->fValue_;
}

char Convert::getCvalue() const {
	return this->cValue_;
}


bool Convert::getIsNanOrInf() const {
	return this->isNanOrInf_;
}

void Convert::fromInt() {
	this->dValue_ = static_cast<double>(this->iValue_);
	this->fValue_ = static_cast<float>(this->iValue_);
	if ((0 <= this->iValue_ && this->iValue_ <= 33) || this->iValue_ == 127)
		this->cValue_ = -1;
	if (33 < this->iValue_ && this->iValue_ <= 126)
		this->cValue_ = static_cast<char>(this->iValue_);
}

void Convert::fromChar() {
	this->iValue_ = static_cast<int>(this->cValue_);
	this->dValue_ = static_cast<double>(this->cValue_);
	this->fValue_ = static_cast<float>(this->cValue_);
}

void Convert::fromDouble() {
	if (INT_MIN <= this->dValue_ && this->dValue_ <= INT_MAX)
		this->iValue_ = static_cast<int>(this->dValue_);
	else
		this->impossible[0] = INT_Impossible;

	if (-3.4E+38 <= this->dValue_ && this->dValue_ <= 3.4E+38)
		this->fValue_ = static_cast<float>(this->dValue_);
	else
		this->impossible[2] = Float_Impossible;

	if (this->impossible[0] != INT_Impossible && ((0 <= this->iValue_ && this->iValue_ <= 33) || this->iValue_ == 127))
		this->cValue_ = -1;
	if (33 < this->iValue_ && this->iValue_ <= 126)
		this->cValue_ = static_cast<char>(this->iValue_);
}

void Convert::fromFloat() {
	this->dValue_ = static_cast<float>(this->fValue_);
	if (INT_MIN <= this->dValue_ && this->dValue_ <= INT_MAX)
		this->iValue_ = static_cast<int>(this->dValue_);
	else
		this->impossible[0] = INT_Impossible;
	if (this->impossible[0] != INT_Impossible && ((0 <= this->iValue_ && this->iValue_ <= 33) || this->iValue_ == 127))
		this->cValue_ = -1;
	if (33 < this->iValue_ && this->iValue_ <= 126)
		this->cValue_ = static_cast<char>(this->iValue_);
}

void Convert::printAll() {
	std::cout <<std::fixed<<std::setprecision(1);
//	std::cout << "type: " << this->getType() << std::endl;
	std::cout << "char: ";
	if (this->cValue_ == -1)
		std::cout << "Non displayable" << std::endl;
	else if (this->cValue_ == -2 or getIsNanOrInf())
		std::cout << "impossible" << std::endl;
	else
		std::cout << "\'" << this->cValue_  << "\'" << std::endl;

	if (this->impossible[0] == INT_Impossible || getIsNanOrInf())
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << this->iValue_ << std::endl;

	std::cout << "float: ";
	if (this->impossible[2] == Float_Impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->fValue_ << "f" << std::endl;

	std::cout << "double: " << this->dValue_ << std::endl;
}

bool Convert::isNanOrInf(std::stringstream& ss) {
	std::string   arrOfInstances[] = { "-inf", "+inf", "nan", "-inff", "+inff", "nanf" };
	for (int i = 0; i < 6; ++i)
	{
		if (this->szStr_ == arrOfInstances[0] || this->szStr_ == arrOfInstances[1] || this->szStr_ == arrOfInstances[2]) {
			ss >> this->dValue_;
			this->fValue_ = static_cast<float>(this->dValue_);
			this->type_ = DOUBLE;
			return true;
		}
		else if (this->szStr_ == arrOfInstances[3] || this->szStr_ == arrOfInstances[4] || this->szStr_ == arrOfInstances[5]) {
			std::string tmp;
			ss >> tmp;
			if (tmp.size() == 4)
				tmp[3] = '\0';
			else
				tmp[4] = '\0';
			std::stringstream	ss_tmp;
			ss_tmp << tmp;
			ss_tmp >> this->fValue_;
			this->dValue_ = static_cast<float>(this->fValue_);
			this->type_ = FLOAT;
			return true;
		}
	}
	return false;
}

bool Convert::checkOverflow() {
	std::stringstream ss;
	ss << this->szStr_;
	switch (this->type_)
	{
		case NONE:
			this->type_ = NONE;
			return true;
		case INT:
			if (!(ss >> this->iValue_))
			{
				this->type_ = NONE;
				return true;
			}
			break;
		case DOUBLE:
			if (!(ss >> this->dValue_))
			{
				this->type_ = NONE;
				return true;
			}
			break;
		case FLOAT:
			std::string tmp;
			tmp = this->szStr_;
			tmp.resize(tmp.size() - 1);
			std::stringstream	ss_tmp;
			ss_tmp << tmp;
			if (!(ss_tmp >> this->fValue_))
			{
				this->type_ = NONE;
				return true;
			}
			break;
	}
	return false;
}


