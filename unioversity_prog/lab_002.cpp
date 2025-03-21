#include <iostream>;
#include <conio.h>;
#include <iomanip>;
using namespace std;
class lab_002 {
public:
	int exercice_id;

	lab_002(int exercice_id) {
		this->exercice_id = exercice_id;
	}

	int run_exercice() {
		switch (this->exercice_id)
		{
		default:
			cout << "No such exercice lol.";
			break;

		case (1):
			exercice_1();
			break;
		case (2):
			exercice_2();
			break;
		case (3):
			exercice_3();
			break;
		}

		return 0;
	}

private:
	int exercice_1() {
		double a, b;
		cout << "Длинна прямоугольника: ";
		cin >> a;
		cout << "Ширина прямоугольника: ";
		cin >> b;
		cout << "Периметр прямоугольника: " << 2 * (a + b) << endl;
		cout << "Площадь  прямоугольника: " << a * b << endl;

		system("pause");
		return 0;
	}

	int exercice_2() {
		char a;
		cout << "Введите символ: ";
		cin >> a;
		system("cls");
		cout << a << a << a << endl;
		cout << a << a << a << endl;
		cout << a << a << a << endl;
		_getch();
		system("cls");
		cout << setw(5) << a << a << a << endl;
		cout << setw(5) << a << a << a << endl;
		cout << setw(5) << a << a << a << endl;
		_getch();
		system("cls");
		cout << endl << endl << endl << endl << endl << a << a << a << endl;
		cout << a << a << a << endl;
		cout << a << a << a << endl;
		_getch();

		system("pause");
		return 0;
	}

	int exercice_3() {
		double order_price;
		char full_name[256];
		cout << "ФИО Покупателя (до 256 символов): ";
		cin.getline(full_name, 256);
		cout << "Сумма заказа: ";
		cin >> order_price;
		system("pause");
		system("cls");
		cout << setw(25) << "Накладная" << endl; // в чем смысл ограничивать до 25, если ФИО занимает 256?
		cout << "_____________________________________________________________________________" << endl << endl;
		cout << "Покупатель" << "                        " << full_name << endl;
		cout << "Сумма заказа" << "                      " << order_price << endl;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Налог" << "                             " << (order_price * 6) / 100 << endl;
		cout << "Транспортировка" << "                   " << (order_price * 10) / 100 << endl;
		cout << "_____________________________________________________________________________" << endl << endl;
		cout << "Стоимость всего" << "                   " << (order_price * 6) / 100 + (order_price * 10) / 100 << endl;
		cout << "_____________________________________________________________________________" << endl;
		system("pause");

		return 0;
	}
};