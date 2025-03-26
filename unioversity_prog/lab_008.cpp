#include "lab_008.h"

lab_008::lab_008(int n, int m, int minRng, int maxRng) : n(n), m(m), minRng(minRng), maxRng(maxRng) {}


void lab_008::calc()
{
	A = RandGen::generate_random_int_2D_arr(n, m, minRng, maxRng);


}
