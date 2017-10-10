#include "CrazyRandomSword.h"
#include <cstdlib>

double CrazyRandomSword::hit(double armor) {
	hitPoints = rand() % 90 + 11;
	armor = rand() % (int)(armor * .5) + 50;
    double damage = hitPoints - armor;
    return damage;
}