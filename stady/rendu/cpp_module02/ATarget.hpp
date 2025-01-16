#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;
class ATarget{
protected:
	std::string type;
public:
	ATarget(){};
	ATarget(std::string n): type(n){};
	ATarget(const ATarget & src){type = src.type;};
	ATarget & operator=(const ATarget & src){
		if(this != &src){
			type = src.type;
		}
		return *this;
	};
	virtual ~ATarget(){};

	std::string getType() const{return type;};

	virtual ATarget *clone() const = 0;

	void getHitBySpell(const ASpell & sp) const;
	
};


#endif