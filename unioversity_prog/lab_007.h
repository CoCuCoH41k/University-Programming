#pragma once
#include <cmath>
#include <iostream>
#include "RandGen.h"
using namespace std;
class lab_007 {
public:
	int n, m, minRng, maxRng;
	long int** A; long long int* B;

	lab_007(int n, int m, int minRng, int maxRng);
	void calc();

private:
	void prepare_A_2D_array();
};