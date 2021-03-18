//
// Created by Rinat Nurutdinow on 3/18/21.
//

#ifndef DAY04_ENEMY_H
#define DAY04_ENEMY_H

#include "iostream"

class Enemy {
private:

	int 			nHp_;
	std::string 	szType_;

public:

	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& copy_obj);
	Enemy&		operator=(const Enemy& objToAssign);
	virtual ~Enemy();

	std::string virtual getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};


#endif //DAY04_ENEMY_H
