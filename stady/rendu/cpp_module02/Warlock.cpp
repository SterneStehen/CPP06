#include "Warlock.hpp"

void Warlock::learnSpell(ASpell * sp){
	arr.learnSpell(sp);
}
void Warlock::forgetSpell(std::string sname){
	arr.forgetSpell(sname);
}
void Warlock::launchSpell(std::string sname, const ATarget & tar){
	if(arr.createSpell(sname))
		arr.createSpell(sname)->launch(tar);
}