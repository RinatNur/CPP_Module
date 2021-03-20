//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef ISPACEMARINE_H
#define ISPACEMARINE_H

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif //ISPACEMARINE_H
