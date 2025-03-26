#pragma once
#include "RandGen.h"
class lab_008
{
	int n, m, minRng, maxRng;
	long int** A;
	lab_008(int n, int m, int minRng, int maxRng);
	void calc();
};

