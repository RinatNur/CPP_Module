//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) {
	this->nHp_ = hp;
	this->szType_ = type;
}

Enemy::Enemy(const Enemy &copy_obj) {
	operator=(copy_obj);
}

Enemy &Enemy::operator=(const Enemy &objToAssign) {
	if (this != &objToAssign)
	{
		this->nHp_ = objToAssign.nHp_;
		this->szType_ = objToAssign.szType_;
	}
	return *this;
}

Enemy::~Enemy() {

}

std::string Enemy::getType() const {
	return this->szType_;
}

int Enemy::getHP() const {
	return this->nHp_;
}

void Enemy::takeDamage(int value) {
	if (value >= 0)
		this->nHp_ -= value;
}
