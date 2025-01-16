
#ifndef ASPELL_HPP
#define ASPELL_HPP


#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;
class ASpell{
protected:
	std::string name;
	std::string effects;
public:
	ASpell(){};
	ASpell(std::string n, std::string t): name(n), effects(t){};
	ASpell(const ASpell & src){name = src.name; effects = src.effects;};
	ASpell & operator=(const ASpell & src){
		if(this != &src){
			name = src.name;
			effects = src.effects;
		}
		return *this;
	};
	virtual ~ASpell(){};

	std::string getName() const{return name;};
	std::string getEffects() const{return effects;};

	virtual ASpell *clone() const = 0;

	void launch(const ATarget & tar);
	
};


#endif