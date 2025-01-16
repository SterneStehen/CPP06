#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP


#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook{
private:
	std::map <std::string, ASpell* > arr;
	SpellBook(const SpellBook & src){
		*this = src;
		//arr = src.arr;;
	};
	SpellBook & operator=(const SpellBook & src){
		arr = src.arr;
		return *this;
	};
public:
	SpellBook(){};

	~SpellBook(){};

	
	void learnSpell(ASpell*);
	void forgetSpell(std::string const &);
	ASpell* createSpell(std::string const &);
};


#endif