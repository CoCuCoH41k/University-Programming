#include <random>
#include <cmath>
#include <iostream>
using namespace std;
class lab_007 {
public:
	int n, m, minRng, maxRng;
	long int** A; long long int* B;

	lab_007(int n, int m, int minRng, int maxRng) : n(n), m(m), minRng(minRng), maxRng(maxRng) {
		A = new long int* [m];
		B = new long long int  [m];
		for (int i = 0; i < m; i++) {
			A[i] = new long int[n];
			B[i] = 1;
		}
	}

	void calc() {
		prepare_A_2D_array();

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
private:
	void prepare_A_2D_array() {
		for (int i = 0; i < m; i++) {
			A[i] = (long int*)generate_random_int_arr(n, minRng, maxRng);		}

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

	int* generate_random_int_arr(int size, int minRng, int maxRng) {
		int* temp_arr_GRIA = new int[size];

		std::random_device rnd;
		std::mt19937 gen(rnd());
		std::uniform_int_distribution<> distr(minRng, maxRng);

		for (int i = 0; i < size; i++) {
			temp_arr_GRIA[i] = distr(gen);
		}

		return temp_arr_GRIA;
	}
};