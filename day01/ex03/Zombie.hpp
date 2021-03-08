//
// Created by Rinat Nurutdinow on 3/2/21.
//

#ifndef _ZOMBIE_H
#define _ZOMBIE_H

#include <string>

class Zombie{
public:
	Zombie();
	~Zombie();

	void			setZombie(const std::string& name, const std::string& type);
	void			announce() const;
private:
	std::string		_zombie_name;
	std::string		_zombie_type;
};
#endif //_ZOMBIE_H
