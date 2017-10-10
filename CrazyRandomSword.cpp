#include "CrazyRandomSword.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));
	armor = fmod(rand(),(armor/2));
	armor = (int)armor;
    double damage = hitPoints - armor;
    if( hitPoints - armor < 0){
		return 0;
	}
    return damage;
}