#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:
	
    CrazyRandomSword() : Weapon("Crazy random sword", RandomDmg()) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);
    double RandomDmg(){
    	srand(time(NULL));
    	hitPoints = rand() % 90 + 11;
    	return hitPoints;
    }

};

#endif /* COMMONSWORD_H */