#include "player.h"

std::string player::getName() const
{
	return name;
}
void player::setName(const String& newName)
{
		name = newName;
}
UInt player::getHealth() const {
	return health;
}
void player::setHealth(const UInt newHealth) {
	health = newHealth;
}
