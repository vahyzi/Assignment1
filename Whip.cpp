#include "Whip.h"
#include <cstdlib>

double Whip::hit(double armor) {
	hitPoints = rand() % 30;
	if((int)hitPoints % 10 == 0){		// If hit by a multiple of ten it ignores armor
		return hitPoints;
	}
	else
		return hitPoints - armor;

}