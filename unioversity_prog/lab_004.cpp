#include "lab_004.h"
using namespace std;
lab_004::lab_004(double x) : x(x) {
	x_float = x_int = 0;
}

double lab_004::calc() {
	x_float = std::modf(x, &x_int);
	if (x <= 100) { return x_float; }

	if (x > 100 && x <= 1000) {
		bool isNegative = x < 0;
		std::string str = std::to_string(std::abs((int)std::round(x)));
		std::reverse(str.begin(), str.end());
		int reversedNum = std::stoi(str);
		return isNegative ? -reversedNum : reversedNum;
	}

	return 0;
}