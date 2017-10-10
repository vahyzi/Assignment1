#include <string>
#include "Weapon.h"

#ifndef WHIP_H
#define WHIP_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class Whip : public Weapon {
public:

    Whip() : Weapon("Whip", 40.0) {
    }
    virtual ~Whip() {}; 
    virtual double hit(double armor);

};

#endif /* COMMONSWORD_H */