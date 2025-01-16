#include "Warlock.hpp"

void Warlock::learnSpell(ASpell * sp){
	if(sp){
		if(arr.find(sp->getName()) == arr.end())
			arr[sp->getName()] = sp->clone();
	}
}
void Warlock::forgetSpell(std::string sname){
	if(arr.find(sname) != arr.end()){
		delete arr[sname];
		arr.erase(arr.find(sname));
	}
}
void Warlock::launchSpell(std::string sname, const ATarget & tar){
	if(arr.find(sname) != arr.end())
		arr[sname]->launch(tar);
}