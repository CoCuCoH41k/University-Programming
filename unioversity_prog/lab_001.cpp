#include "lab_001.h"
using namespace std;

lab_001::lab_001(double val) : val(val) {};

double lab_001::calc() { return std::pow(2, std::ceil(std::log2(this->val))); }
