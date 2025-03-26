#include "lab_003.h"
using namespace std;
lab_003::lab_003(double m, double c, double t) : m(m), c(c), t(t) {}

double lab_003::calc() { return std::pow(m * std::tan(t) + std::abs(c * std::sin(t)), 1.0/3.0); }
