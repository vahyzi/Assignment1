#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
    double damage = hitPoints - armor;
    if (armor > 0 && armor < 20) {
        return hitPoints;
    }
    if( hitPoints - armor < 0){
		return 0;
	}
    return damage;
}