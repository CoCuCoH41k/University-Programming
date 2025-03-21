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
		cout << "������ ��������������: ";
		cin >> a;
		cout << "������ ��������������: ";
		cin >> b;
		cout << "�������� ��������������: " << 2 * (a + b) << endl;
		cout << "�������  ��������������: " << a * b << endl;

		system("pause");
		return 0;
	}

	int exercice_2() {
		char a;
		cout << "������� ������: ";
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
		cout << "��� ���������� (�� 256 ��������): ";
		cin.getline(full_name, 256);
		cout << "����� ������: ";
		cin >> order_price;
		system("pause");
		system("cls");
		cout << setw(25) << "���������" << endl; // � ��� ����� ������������ �� 25, ���� ��� �������� 256?
		cout << "_____________________________________________________________________________" << endl << endl;
		cout << "����������" << "                        " << full_name << endl;
		cout << "����� ������" << "                      " << order_price << endl;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "�����" << "                             " << (order_price * 6) / 100 << endl;
		cout << "���������������" << "                   " << (order_price * 10) / 100 << endl;
		cout << "_____________________________________________________________________________" << endl << endl;
		cout << "��������� �����" << "                   " << (order_price * 6) / 100 + (order_price * 10) / 100 << endl;
		cout << "_____________________________________________________________________________" << endl;
		system("pause");

		return 0;
	}
};