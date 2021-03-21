//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:

	AMateria*		MateriaSource_[4];
	int				nAmountMatSource_;

public:

	MateriaSource();
	MateriaSource(const MateriaSource& copy_obj);
	MateriaSource& operator=(const MateriaSource& obj_to_assign);
	virtual ~MateriaSource();

	void			learnMateria(AMateria*);
	AMateria*		createMateria(std::string const & type);

};


#endif //MATERIASOURCE_HPP
