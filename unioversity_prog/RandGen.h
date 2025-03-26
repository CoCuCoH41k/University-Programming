#pragma once
#include <random>
#include <iostream>
using namespace std;
class RandGen
{
public:
	static int* generate_random_int_1D_arr(int size, int minRng, int maxRng);
	static long int** generate_random_int_2D_arr(int nSize, int mSize, int minRng, int maxRng);
};

