#include <cmath>
using namespace std;
class lab_001 {
public:
	double val;
	
	lab_001(double val) : val(val) {};

	double calc() {
		return std::pow(2, std::ceil(std::log2(this->val)));
	}
};

