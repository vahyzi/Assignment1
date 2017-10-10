#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD
#define CRAZYRANDOMSWORD

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 40.0) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* COMMONSWORD_H */