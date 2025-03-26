#include "lab_005.h"
using namespace std;
	
lab_005::lab_005(int n) : n(n) {}

void lab_005::calc() {
	std::list<double> filtred_values;
	int negative_cnt = 0;
	for (int i = 0; i < n; i++)
	{
		system("cls");
		double temp;
		printf("Введите число под индексом %d: ", i + 1);
		cin >> temp;
		negative_cnt = (temp < 0) ? negative_cnt + 1 : negative_cnt;
		if (temp >= -5 && temp <= 5) {
			filtred_values.push_front(temp);
		}
	}

	double sum = 0;
	for (double value : filtred_values)
	{
		sum += value;
	}
	system("cls");
	cout << "Сумма: " << sum << endl;
	cout << "Кол-во элементов уступающих диапозону [-5, 5]: " << filtred_values.size() << endl;
	cout << "Кол-во отрицательных элементов: " << negative_cnt << endl;
}