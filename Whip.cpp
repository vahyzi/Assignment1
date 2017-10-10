#include "Whip.h"
#include <cstdlib>

double Whip::hit(double armor) {
	if((int)hitPoints % 5 == 0){		// If hit by a multiple of 5 it ignores armor
		return hitPoints;
	}

	if( hitPoints - armor < 0){
		return 0;
	}

	return hitPoints - armor;

}