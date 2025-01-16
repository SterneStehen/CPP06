#include "SpellBook.hpp"
#include "Warlock.hpp"


void SpellBook::learnSpell(ASpell* sp){
	if(sp){
		arr[sp->getName()] = sp->clone();
	}
}

void SpellBook::forgetSpell(std::string const & sname){
	if(arr.find(sname) != arr.end()){
		arr.erase(arr.find(sname));
	}
}

ASpell* SpellBook::createSpell(std::string const &sname){
	ASpell * tmp = NULL;
	if(arr.find(sname) != arr.end()){
		tmp = arr[sname];
	}
	return tmp;
}