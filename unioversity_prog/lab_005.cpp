#include <cmath>
#include <iostream>
#include <list>
using namespace std;
class lab_005 {
public:
	int n;
	lab_005(int n) : n(n) {}

	int prepare() {
		std::list<double> filtred_values;
		int negative_cnt = 0;
		for (int i = 0; i < n; i++)
		{
			system("cls");
			double temp;
			printf("������� ����� ��� �������� %d: ", i + 1);
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
		cout << "�����: " << sum << endl;
		cout << "���-�� ��������� ���������� ��������� [-5, 5]: " << filtred_values.size() << endl;
		cout << "���-�� ������������� ���������: " << negative_cnt << endl;

		return 0;
	}
};