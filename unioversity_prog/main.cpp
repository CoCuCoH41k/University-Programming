#include <conio.h>     // ��� _getch
#include <iostream>    // ������ � ������� �� �����
#include <locale.h>    // ��� �������� �����
#include <iomanip>     // ��� system
#include <string>
#include <windows.h>   // ������ ��� �������� �����
#include "lab_001.cpp"
#include "lab_002.cpp"
#include "lab_003.cpp"
#include "lab_004.cpp"
#include "lab_005.cpp"
#include "lab_006.cpp"
#include "lab_007.cpp"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double value, m, c, t, x, min, max;
	int lab_id, exercice_id, n, lab_6_sublab_id, lab_6_sublab_2_method_id;
	cout << "����� ������������ ������: ";
	cin >> lab_id;


	switch (lab_id) {
	case (1):
		cout << "�������� ����� �����: ";
		cin >> value;
		cout << lab_001(value).calc();
		break;

	case(2):
		cout << "�������� ���������� ����� ����������: ";
		cin >> exercice_id;
		lab_002(exercice_id).run_exercice();
		break;
		

	case (3):
		cout << "������� M: ";
		cin >> m;
		cout << "������� C: ";
		cin >> c;
		cout << "������� T: ";
		cin >> t;
		cout << lab_003(m, c ,t).calc();
		break;

	case (4):
		cout << "������� X <= 1000: ";
		cin >> x;
		cout << lab_004(x).calc();
		break;

	case (5):
		cout << "������� n (���-�� �������� ���������): ";
		cin >> n;
		lab_005(n).prepare();
		break;

	case (6):
		cout << "������� n (���-�� �������� ���������): ";
		cin >> n;
		value = lab_006(n).prepare(&lab_6_sublab_id, &lab_6_sublab_2_method_id);
		if (lab_6_sublab_id == 1) {
			cout << "������������ ������������������ �����: " << value;
		} else {
			if (lab_6_sublab_2_method_id == 1) {
				cout << "��� - �� � ������ ��������� ������: " << value;
			} else {
				cout << "��� - �� � ������ ��������� ��������: " << value;
			}
		}
		break;

	case (7):
		cout << "������� ������ ������� n: ";
		cin >> n;
		cout << "������� ������ ������� m: ";
		cin >> m;
		cout << "������� ����������� ���������� ����� ��� ���������: ";
		cin >> min;
		cout << "������� ������������ ���������� ����� ��� ���������: ";
		cin >> max;

		lab_007(n, m, min, max).calc();
	}
}