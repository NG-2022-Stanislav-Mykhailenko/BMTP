#ifndef MODULESMYKHAILENKO_H_INCLUDED
#define MODULESMYKHAILENKO_H_INCLUDED

#include <cmath>

float s_calculation(int x, int y, int z) {
	return fabs(sin(fabs(y-pow(z,2)))+sqrt(x)-sqrt(pow(y*z, x)+(y/(2*M_PI))));
}


#endif // MODULESMYKHAILENKO_H_INCLUDED
