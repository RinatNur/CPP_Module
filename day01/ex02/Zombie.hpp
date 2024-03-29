//
// Created by Rinat Nurutdinow on 3/2/21.
//

#ifndef DAY01_ZOMBIE_H
#define DAY01_ZOMBIE_H

#include <string>

class Zombie{
public:
	Zombie(const std::string& name, const std::string& type);
	~Zombie();
	void 		announce() const;
private:
	std::string		_zombie_name;
	std::string		_zombie_type;
};
#endif //DAY01_ZOMBIE_H
