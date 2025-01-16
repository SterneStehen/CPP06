#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP


#include <iostream>
#include <map>
#include "ATarget.hpp"


class TargetGenerator{
private:
	std::map <std::string, ATarget* > arrt;
	TargetGenerator(const TargetGenerator & src){
		*this = src;
		//arrt = src.arrt;;
	};
	TargetGenerator & operator=(const TargetGenerator & src){
		arrt = src.arrt;
		return *this;
	};
public:
	TargetGenerator(){};

	~TargetGenerator(){};

	
	void learnTargetType(ATarget*);
	void forgetTargetType(std::string const &);
	ATarget* createTarget(std::string const &);
};


#endif