#include "lab_008_check_sum.h"
int checkSum(int size, long int* arr) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += isSimpleValue(arr[i]) ? arr[i] : 0;
	}
	return sum;
}