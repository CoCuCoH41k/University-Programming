#include "lab_007.h"

lab_007::lab_007(int n, int m, int minRng, int maxRng) : n(n), m(m), minRng(minRng), maxRng(maxRng) {}

void lab_007::calc() {
	A = RandGen::generate_random_int_2D_arr(n, m, minRng, maxRng);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			B[i] = (A[i][j] > 0) ? B[i] * A[i][j] : B[i];
		}
	}

	cout << "Вывод массива B[m]:\n";
	for (int i = 0; i < m; i++)
	{
		cout << B[i] << " ";
	}
}