#include <conio.h>     // Для _getch
#include <iostream>    // Работа с выводом на экран
#include <locale.h>    // Для русского языка
#include <iomanip>     // Для system
#include <string>
#include <windows.h>   // Другое для русского языка
#include "lab_001.cpp"
#include "lab_002.cpp"
#include "lab_003.cpp"
#include "lab_004.cpp"
#include "lab_005.cpp"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int lab_id;
	cout << "Номер лаболаторной работы: ";
	cin >> lab_id;


	switch (lab_id) {
	case (1):
		double value;
		cout << "Напишите любое число: ";
		cin >> value;
		cout << lab_001(value).calc();
		break;

	case(2):
		int exercice_id;
		cout << "Напишите порядковый номер упражнения: ";
		cin >> exercice_id;
		lab_002(exercice_id).run_exercice();
		break;
		

	case (3):
		double m, c ,t;
		cout << "Введите M: ";
		cin >> m;
		cout << "Введите C: ";
		cin >> c;
		cout << "Введите T: ";
		cin >> t;
		cout << lab_003(m, c ,t).calc();
		break;
	case (4):
		double x;
		cout << "Введите X <= 1000: ";
		cin >> x;
		cout << lab_004(x).calc();
		break;
	case (5):
		int n;
		cout << "Введите n (кол-во будующих элементов): ";
		cin >> n;
		lab_005(n).prepare();
	}
}

