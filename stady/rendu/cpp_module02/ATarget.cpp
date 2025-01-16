#include "ATarget.hpp"


void ATarget::getHitBySpell(const ASpell & sp) const {
		std::cout << type << " has been "<< sp.getEffects() << "!\n";
	}