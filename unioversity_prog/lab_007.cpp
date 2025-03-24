#include <cmath>
#include "rnd.cpp"
#include <iostream>
using namespace std;
class lab_007 {
public:
	int n, m, minRng, maxRng;
	int** A; int* B;

	lab_007(int n, int m, int minRng, int maxRng) : n(n), m(m), minRng(minRng), maxRng(maxRng) {
		A = new int* [m];
		B = new int  [m];
		for (int i = 0; i < m; i++) {
			A[i] = new int[n];
			B[i] = 1;
		}
	}

	void calc() {
		prepare_A_2D_array();



		for (int i = 0; i < m; m++) {
			for (int j = 0; j < n; n++) {
				B[i] = (A[i][j] > 0) ? B[i] * A[i][j] : B[i];
			}
		}

		cout << "Вывод массива B[m]:\n";
		for (int i = 0; i < m; i++)
		{
			cout << B[i] << " ";
		}
	}
private:
	void prepare_A_2D_array() {
		for (int i = 0; i < m; i++) {
			A[i] = rnd(minRng, maxRng).generate_random_int_arr(n);
		}

		cout << "Случайно сгенерированая матрица по введенным данным (числа угождающие условию 0< подсвечены):\n\n";
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (A[i][j] > 0) {
					cout << "\033[31m" << A[i][j] << "\033[0m" << " ";
				} else {
					cout << A[i][j] << " ";
				}
			}
			cout << "|\n";
		}
		cout << "\n";

	}
};