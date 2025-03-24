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
#include "lab_006.cpp"
#include "lab_007.cpp"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double value, m, c, t, x, min, max;
	int lab_id, exercice_id, n, lab_6_sublab_id, lab_6_sublab_2_method_id;
	cout << "Номер лаболаторной работы: ";
	cin >> lab_id;


	switch (lab_id) {
	case (1):
		cout << "Напишите любое число: ";
		cin >> value;
		cout << lab_001(value).calc();
		break;

	case(2):
		cout << "Напишите порядковый номер упражнения: ";
		cin >> exercice_id;
		lab_002(exercice_id).run_exercice();
		break;
		

	case (3):
		cout << "Введите M: ";
		cin >> m;
		cout << "Введите C: ";
		cin >> c;
		cout << "Введите T: ";
		cin >> t;
		cout << lab_003(m, c ,t).calc();
		break;

	case (4):
		cout << "Введите X <= 1000: ";
		cin >> x;
		cout << lab_004(x).calc();
		break;

	case (5):
		cout << "Введите n (кол-во будующих элементов): ";
		cin >> n;
		lab_005(n).prepare();
		break;

	case (6):
		cout << "Введите n (кол-во будующих элементов): ";
		cin >> n;
		value = lab_006(n).prepare(&lab_6_sublab_id, &lab_6_sublab_2_method_id);
		if (lab_6_sublab_id == 1) {
			cout << "Максимальная последовательность нулей: " << value;
		} else {
			if (lab_6_sublab_2_method_id == 1) {
				cout << "Кол - во в числах используя индекс: " << value;
			} else {
				cout << "Кол - во в числах используя итератор: " << value;
			}
		}
		break;

	case (7):
		cout << "Введите размер матрицы n: ";
		cin >> n;
		cout << "Введите размер матрицы m: ";
		cin >> m;
		cout << "Введите минимальное допустимое число для генерации: ";
		cin >> min;
		cout << "Введите максимальное допустимое число для генерации: ";
		cin >> max;

		lab_007(n, m, min, max).calc();
	}
}