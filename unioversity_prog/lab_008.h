#pragma once
#include "RandGen.h"
#include "lab_008_check_sum.h"
#include "lab_008_simple_value.h"
class lab_008
{
public:
	int n, m, minRng, maxRng;
	long int** A;
	lab_008(int n, int m, int minRng, int maxRng);
	void calc();
};

