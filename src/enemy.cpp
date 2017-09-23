#include "enemy.h"

UInt enemy::getHealth() const {
	return health;
}

void enemy::setHealth(const UInt newHealth) {
	health = newHealth;
}
