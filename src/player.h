#pragma once

#include <string>
#include "types.h"

class player {
public:
	String getName() const;
	void setName(const String& newName);
	UInt getHealth() const;
	void setHealth(const UInt newHealth);
private:
	String name;
	UInt health;
};
