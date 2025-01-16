#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Fwoosh: public ASpell{
public: 
	Fwoosh(): ASpell("Fwoosh", "fwooshed") {};
	~Fwoosh(){};
	ASpell *clone() const{
		return new Fwoosh();
	}
};

#endif