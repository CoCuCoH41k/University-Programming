#include <cmath>
using namespace std;
class lab_003 {
public:
	double m, c, t;

	lab_003(double m, double c, double t) : m(m), c(c), t(t) {}

	double calc() {
		return std::pow(m * std::tan(t) + std::abs(c * std::sin(t)), 1.0/3.0);
	}
};