#pragma once
#include "Types.h"

class enemy
{
  public:
    UInt getHealth() const;
    void setHealth(const  UInt newHealth);
  private:
    UInt health;
};
