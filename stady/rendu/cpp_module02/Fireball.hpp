#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Fireball: public ASpell{
public: 
	Fireball(): ASpell("Fireball", "burnt to a crisp") {};
	~Fireball(){};
	ASpell *clone() const{
		return new Fireball();
	}
};

#endif