#include "ASpell.hpp"

void ASpell::launch(const ATarget & tar) {
		tar.getHitBySpell(*this);
	}