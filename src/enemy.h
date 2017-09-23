#pragma once
#include "Types.h"

class enemy
{
  public:
    UInt getHealth() const;
    void setHealth(const unsigned int newHealth);
  private:
    UInt health;
};
