#include <cmath>
using namespace std;
class lab_003 {
public:
	double m;
	double c;
	double t;

	lab_003(double m, double c, double t) {
		this->m = m;
		this->c = c;
		this->t = t;
	}

	double calc() {
		return std::pow(m * std::tan(t) + std::abs(c * std::sin(t)), 1.0/3.0);
	}
};