#include "ArrayCOUT.h"


void ArrayCOUT::showIntArray1D(int size, int* arr)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_UC_per_value(int size, int* arr, std::function<bool(int)> formatter)
{
	for (int i = 0; i < size; i++) {
		long long int curr_value = arr[i];
		if (formatter(curr_value)) {
			cout << "\033[31m" << curr_value << "\033[0m";
		} else {
			cout << curr_value;
		}
		cout << " ";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_UC_per_digit(int size, int* arr, std::function<bool(char)> formatter)
{
	for (int i = 0; i < size; i++) {
		long long int curr_value = arr[i];
		std::string temp = std::to_string(curr_value);
		for (char digit : temp) {
			if (formatter(digit)) {
				cout << "\033[31m" << digit << "\033[0m";
			}
			else {
				cout << digit;
			}
		}
		cout << " ";
	}
	cout << endl;

}

void ArrayCOUT::showIntArray2D(int nSize, int mSize, int** arr)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray2D_UC_per_value(int nSize, int mSize, int** arr, std::function<bool(int)> formatter)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			if (formatter(arr[i][j])) {
				cout << "\033[31m" << arr[i][j] << "\033[0m" << " ";
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray2D_UC_per_digit(int nSize, int mSize, int** arr, std::function<bool(char)> formatter)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			std::string temp = std::to_string(arr[i][j]);
			for (char digit : temp) {
				if (formatter(digit)) {
					std::cout << "\033[31m" << digit << "\033[0m";
				}
				else {
					std::cout << digit;
				}
			}
			cout << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_l(int size, long int* arr)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_l_UC_per_value(int size, long int* arr, std::function<bool(int)> formatter)
{
	for (int i = 0; i < size; i++) {
		long long int curr_value = arr[i];
		if (formatter(curr_value)) {
			cout << "\033[31m" << curr_value << "\033[0m";
		}
		else {
			cout << curr_value;
		}
		cout << " ";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_l_UC_per_digit(int size, long int* arr, std::function<bool(char)> formatter)
{
	for (int i = 0; i < size; i++) {
		long long int curr_value = arr[i];
		std::string temp = std::to_string(curr_value);
		for (char digit : temp) {
			if (formatter(digit)) {
				cout << "\033[31m" << digit << "\033[0m";
			}
			else {
				cout << digit;
			}
		}
		cout << " ";
	}
	cout << endl;

}

void ArrayCOUT::showIntArray2D_l(int nSize, int mSize, long int** arr)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray2D_l_UC_per_value(int nSize, int mSize, long int** arr, std::function<bool(int)> formatter)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			if (formatter(arr[i][j])) {
				cout << "\033[31m" << arr[i][j] << "\033[0m" << " ";
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray2D_l_UC_per_digit(int nSize, int mSize, long int** arr, std::function<bool(char)> formatter)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			std::string temp = std::to_string(arr[i][j]);
			for (char digit : temp) {
				if (formatter(digit)) {
					std::cout << "\033[31m" << digit << "\033[0m";
				}
				else {
					std::cout << digit;
				}
			}
			cout << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_ll(int size, long long int* arr)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_ll_UC_per_value(int size, long long int* arr, std::function<bool(int)> formatter)
{
	for (int i = 0; i < size; i++) {
		long long int curr_value = arr[i];
		if (formatter(curr_value)) {
			cout << "\033[31m" << curr_value << "\033[0m";
		}
		else {
			cout << curr_value;
		}
		cout << " ";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray1D_ll_UC_per_digit(int size, long long int* arr, std::function<bool(char)> formatter)
{
	for (int i = 0; i < size; i++) {
		long long int curr_value = arr[i];
		std::string temp = std::to_string(curr_value);
		for (char digit : temp) {
			if (formatter(digit)) {
				cout << "\033[31m" << digit << "\033[0m";
			}
			else {
				cout << digit;
			}
		}
		cout << " ";
	}
	cout << endl;

}

void ArrayCOUT::showIntArray2D_ll(int nSize, int mSize, long long int** arr)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray2D_ll_UC_per_value(int nSize, int mSize, long long int** arr, std::function<bool(int)> formatter)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			if (formatter(arr[i][j])) {
				cout << "\033[31m" << arr[i][j] << "\033[0m" << " ";
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << "\n";
	}
	cout << endl;
}

void ArrayCOUT::showIntArray2D_ll_UC_per_digit(int nSize, int mSize, long long int** arr, std::function<bool(char)> formatter)
{
	for (int i = 0; i < mSize; i++) {
		for (int j = 0; j < nSize; j++) {
			std::string temp = std::to_string(arr[i][j]);
			for (char digit : temp) {
				if (formatter(digit)) {
					std::cout << "\033[31m" << digit << "\033[0m";
				}
				else {
					std::cout << digit;
				}
			}
			cout << " ";
		}
		cout << "\n";
	}
	cout << endl;
}