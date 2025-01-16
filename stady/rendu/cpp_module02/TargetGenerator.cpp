#include "TargetGenerator.hpp"
#include "Warlock.hpp"



void TargetGenerator::learnTargetType(ATarget* sp){
	if(sp){
		arrt[sp->getType()] = sp;
	}
}

void TargetGenerator::forgetTargetType(std::string const & sname){
	if(arrt.find(sname) != arrt.end()){
		arrt.erase(arrt.find(sname));
	}
}

ATarget* TargetGenerator::createTarget(std::string const &sname){
	ATarget * tmp = NULL;
	if(arrt.find(sname) != arrt.end())
		tmp = arrt[sname];
	return tmp;
}