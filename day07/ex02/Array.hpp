//
// Created by Rinat Nurutdinow on 3/30/21.
//

#ifndef DAY07_ARRAY_HPP
#define DAY07_ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:

	T*		arr_;
	int	len;

public:
	Array() {};
	Array(unsigned int n) : arr_(nullptr), len(n)
	{
		this->arr_ = new T[n]();
	}
	Array(const Array & objToCopyFrom) {
		operator=(objToCopyFrom);
	};
	Array &operator=(const Array & objToAssign) {
		this->len = objToAssign.len;
		this->arr_ = new T[this->len];
		for (int i = 0; i < objToAssign.len; ++i)
			this->arr_[i] = objToAssign[i];
		return *this;
	}
	virtual ~Array() {
		delete [] arr_;
	};

	class IndexIsOutOfArray : public std::exception {
	public:
		virtual const char* what() const throw(){
			return "Index is out of array";
		}
	};

	T& operator[](int index){
		if (index >= this->len)
			throw Array::IndexIsOutOfArray();
		return arr_[index];
	}

	const T& operator[](int index) const{
		if (index >= this->len)
			throw Array::IndexIsOutOfArray();
		return (arr_[index]);
	}
	size_t 	size() const{
		return this->len;
	}
};


#endif //DAY07_ARRAY_HPP
