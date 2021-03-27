//
// Created by Rinat Nurutdinow on 3/25/21.
//

#include "Convert.hpp"

Convert::Convert(const std::string& szStr) : szStr_(szStr), type_(NONE){

	std::stringstream ss;
	ss << this->szStr_;

	this->parser();
	if (this->type_ == INT)
	{
		ss >> this->iValue_;
		this->fromInt();
	}
//	if (this->type_ == CHAR)
//		return "char";
//	if (this->type_ == DOUBLE)
//		return "double";
//	if (this->type_ == FLOAT)
//		return "float";
}

void Convert::parser() {
	std::stringstream ss;
	size_t		i = 0;
	int 		len = this->szStr_.size();
	if (len == 1 && !isdigit(this->szStr_[0]))
	{
		this->cValue_ = static_cast<char>(this->szStr_[0]);
		this->type_ = CHAR;
		return;
	}
	if (this->szStr_[0] == '-' || this->szStr_[0] == '+')
		ss << this->szStr_[i++];
	this->type_ = INT;
	for (int i = 0; i < len; ++i)
	{
		if (this->szStr_[i] == '.')
			this->type_ = DOUBLE;
		if (this->szStr_[i] == 'f')
			this->type_ = FLOAT;
		ss << this->szStr_[i++];
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

void Convert::fromInt() {
//	int i = static_cast<int>(c);
	this->dValue_ = static_cast<double>(this->iValue_);
	this->fValue_ = static_cast<float>(this->iValue_);

}

void Convert::fromChar() {

}

void Convert::fromDouble() {

}

void Convert::fromFloat() {

}
