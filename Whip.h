#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

#ifndef WHIP_H
#define WHIP_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class Whip : public Weapon {
public:
    Whip() : Weapon("Whip", RandomDmg()) {
    }
    virtual ~Whip() {}; 
    virtual double hit(double armor);
    double RandomDmg(){
    	srand(time(NULL));
    	hitPoints = rand() % 45;
    	return hitPoints;
    }

};

#endif /* COMMONSWORD_H */