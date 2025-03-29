#include <conio.h>     // ��� _getch
#include <iostream>    // ������ � ������� �� �����
#include <locale.h>    // ��� �������� �����
#include <iomanip>     // ��� system
#include <string>
#include <windows.h>   // ������ ��� �������� �����
#include "lab_001.h"
#include "lab_002.h"
#include "lab_003.h"
#include "lab_004.h"
#include "lab_005.h"
#include "lab_006.h"
#include "lab_007.h"
#include "lab_008.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double value, m, c, t, x, min, max;
	int lab_id, exercice_id, n;

	BACK_TO_START :

	cout << "����� ������������ ������ (0 ��� ������): ";
	cin >> lab_id;


	switch (lab_id) {
	case (1):
		cout << "�������� ����� �����: ";
		cin >> value;
		cout << lab_001(value).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case(2):
		cout << "�������� ���������� ����� ����������: ";
		cin >> exercice_id;
		lab_002(exercice_id).run_exercice();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;
		
	case (3):
		cout << "������� M: ";
		cin >> m;
		cout << "������� C: ";
		cin >> c;
		cout << "������� T: ";
		cin >> t;
		cout << lab_003(m, c ,t).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (4):
		cout << "������� X <= 1000: ";
		cin >> x;
		cout << lab_004(x).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (5):
		cout << "������� n (���-�� �������� ���������): ";
		cin >> n;
		lab_005(n).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (6):
		cout << "������� n (���-�� �������� ���������): ";
		cin >> n;
		lab_006(n).prepare();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

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
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (8):
		cout << "������� ������ ������� n: ";
		cin >> n;
		cout << "������� ������ ������� m: ";
		cin >> m;
		cout << "������� ����������� ���������� ����� ��� ���������: ";
		cin >> min;
		cout << "������� ������������ ���������� ����� ��� ���������: ";
		cin >> max;

		lab_008(n, m, min, max).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	default:
		system("cls");
		goto BACK_TO_START;

	case (0):
		system("cls");
		break;
	}
}