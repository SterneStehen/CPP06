#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class BrickWall: public ATarget{
public: 
	BrickWall(): ATarget("Inconspicuous Red-brick Wall"){};
	~BrickWall(){};
	ATarget *clone() const{
		return new BrickWall();
	}
};

#endif