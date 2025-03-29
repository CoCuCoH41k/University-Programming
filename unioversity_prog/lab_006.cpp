#include "lab_006.h"

using namespace std;
lab_006::lab_006(int n) : n(n) {
	arr = new int[n];
}

int lab_006::prepare() {
	cout << "����� ������������ ������? ";
	cin >> sublab_id;

	switch (sublab_id)
	{
	default:
		printf("�������� � ������� %d �� ����������.", sublab_id);
		break;
	case (1):
		digit = '0';
		break;
	case(2):
		cout << "������� ����� ��� �����������: ";
		cin >> digit;
		cout << "����� �������?\n1 - ��������� ������\n2 - ��������� ��������" << endl;
		cin >> sublab_2_method_id;
		break;
	}

	cout << "��� �� ������ ��������� ������?\n1 - �������.\n2 - ��������� �������� �����" << endl;
	int choise;
	cin >> choise;
	switch (choise) {

	default:
		printf("�������� � ������� %d �� ����������.", choise);
		break;

	case (1):
		return hand_writing();

	case (2):
		return random_generation();
	};
}

int lab_006::hand_writing() { // ������ ����
	for (int i = 0; i < n; i++)
	{
		printf("������� ����� ��� �������� ��� �������� %d: ", i + 1);
		cin >> arr[i];
	}
	return (sublab_id == 1) ? sublab_1() : (sublab_2_method_id == 1) ? sublab_2_using_index() : sublab_2_using_iteration();
}

int lab_006::random_generation() { // �������������� ��������� �� ��������� ���������.
	int minRng, maxRng;
	cout << "������� ����������� ����� ���������: ";
	cin >> minRng;
	cout << "������� ������������ ����� ���������: ";
	cin >> maxRng;

	arr = RandGen::generate_random_int_1D_arr(n, minRng, maxRng);

	return (sublab_id == 1) ? sublab_1() : (sublab_2_method_id == 1) ? sublab_2_using_index() : sublab_2_using_iteration();
}

	// ================================================================================================ ���� 6.1
int lab_006::sublab_1() {
	int max_zl = 0;
	int zeros_lenght = 0;

	ArrayCOUT::showIntArray1D_UC_per_value(n, arr, [](int curr_value) { return curr_value == 0; });

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] == 0 && arr[i + 1] == 0) {
			zeros_lenght++;
			continue;
		}

		if (arr[i] == 0 && arr[i + 1] != 0) {
			zeros_lenght++;
			max_zl = max(max_zl, zeros_lenght);
			continue;
		}

		if (arr[i] != 0) {
			zeros_lenght = 0;
			continue;
		}
	}

	cout << "������������ ������������������ �����: " << max_zl;
	return 0;
}

	// ================================================================================================ ���� 6.2
int lab_006::sublab_2_using_index() {
	int digid_cnt = 0;

	ArrayCOUT::showIntArray1D_UC_per_digit(n, arr, [this](char curr_digit) { return curr_digit == this->digit; });

	for (int i = 0; i < n; i++) {
		for (char digit : std::to_string(arr[i])) {
			digid_cnt = (this->digit == digit) ? digid_cnt + 1 : digid_cnt;
		}
	}

	cout << "��� - �� " << this->digit << " � ������ ��������� ������: " << digid_cnt;
	return 0;
}

int lab_006::sublab_2_using_iteration() {
	int digid_cnt = 0;

	ArrayCOUT::showIntArray1D_UC_per_digit(n, arr, [this](char curr_digit) { return curr_digit == this->digit; });

	for (int* it = arr; it < arr + n; it++) {
		for (char digit : std::to_string(*it)) {
			digid_cnt = (this->digit == digit) ? digid_cnt + 1 : digid_cnt;
		}
	}

	cout << "��� - �� " << this->digit << " � ������ ��������� ��������: " << digid_cnt;
	return 0;
}