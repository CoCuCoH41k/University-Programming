#include <conio.h>     // Для _getch
#include <iostream>    // Работа с выводом на экран
#include <locale.h>    // Для русского языка
#include <iomanip>     // Для system
#include <string>
#include <windows.h>   // Другое для русского языка
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

	cout << "Номер лаболаторной работы (0 для выхода): ";
	cin >> lab_id;


	switch (lab_id) {
	case (1):
		cout << "Напишите любое число: ";
		cin >> value;
		cout << lab_001(value).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case(2):
		cout << "Напишите порядковый номер упражнения: ";
		cin >> exercice_id;
		lab_002(exercice_id).run_exercice();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;
		
	case (3):
		cout << "Введите M: ";
		cin >> m;
		cout << "Введите C: ";
		cin >> c;
		cout << "Введите T: ";
		cin >> t;
		cout << lab_003(m, c ,t).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (4):
		cout << "Введите X <= 1000: ";
		cin >> x;
		cout << lab_004(x).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (5):
		cout << "Введите n (кол-во будующих элементов): ";
		cin >> n;
		lab_005(n).calc();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (6):
		cout << "Введите n (кол-во будующих элементов): ";
		cin >> n;
		lab_006(n).prepare();
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

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
		cout << endl; system("pause"); system("cls");
		goto BACK_TO_START;

	case (8):
		cout << "Введите размер матрицы n: ";
		cin >> n;
		cout << "Введите размер матрицы m: ";
		cin >> m;
		cout << "Введите минимальное допустимое число для генерации: ";
		cin >> min;
		cout << "Введите максимальное допустимое число для генерации: ";
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