#include "lab_008_simple_value.h"
bool isSimpleValue(int value) {
    if (value <= 1) return false;
    if (value == 2) return true;
    if (value % 2 == 0) return false;

    int sqrtVal = static_cast<int>(std::sqrt(value));
    for (int i = 3; i <= sqrtVal; i += 2) {
        if (value % i == 0) return false;
    }

    return true;
}
