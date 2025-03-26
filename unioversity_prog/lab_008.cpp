#include "lab_008.h"

lab_008::lab_008(int n, int m, int minRng, int maxRng) : n(n), m(m), minRng(minRng), maxRng(maxRng) {
	A = RandGen::generate_random_int_2D_arr(n, m, minRng, maxRng);
}


void lab_008::calc()
{
    std::sort(A, A + n, [this](long int* a, long int* b) { return checkSum(m, a) > checkSum(m, b); });
	
	cout << "Случайно сгенерированая матрица по введенным данным (числа угождающие условию о простоте подсвечены):\n\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (isSimpleValue(A[i][j])) {
				cout << "\033[31m" << A[i][j] << "\033[0m" << " ";
			}
			else {
				cout << A[i][j] << " ";
			}
		}
		cout << "| Сумма = " << checkSum(m, A[i]) << "\n";
	}
	cout << "\n";
}
