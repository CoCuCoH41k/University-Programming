#include "RandGen.h"
int* RandGen::generate_random_int_1D_arr(int size, int minRng, int maxRng)
{
	int* A = new int[size];

	std::random_device rnd;
	std::mt19937 gen(rnd());
	std::uniform_int_distribution<> distr(minRng, maxRng);

	for (int i = 0; i < size; i++) {
		A[i] = distr(gen);
	}

	return A;
}

long int** RandGen::generate_random_int_2D_arr(int nSize, int mSize, int minRng, int maxRng) {
	long int** A; long long int* B;
	for (int i = 0; i < mSize; i++) {
		A[i] = (long int*)RandGen::generate_random_int_1D_arr(nSize, minRng, maxRng);
	}

	cout << "Случайно сгенерированая матрица по введенным данным (числа угождающие условию 0< подсвечены):\n\n";
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			if (A[i][j] > 0) {
				cout << "\033[31m" << A[i][j] << "\033[0m" << " ";
			}
			else {
				cout << A[i][j] << " ";
			}
		}
		cout << "|\n";
	}
	cout << "\n";

	return A;
}