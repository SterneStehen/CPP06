#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class Dummy: public ATarget{
public: 
	Dummy(): ATarget("Target Practice Dummy"){};
	~Dummy(){};
	ATarget *clone() const{
		return new Dummy();
	}
};

#endif