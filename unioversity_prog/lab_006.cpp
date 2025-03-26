#include "lab_006.h"

using namespace std;
lab_006::lab_006(int n) : n(n) {
	arr = new int[n];
}

int lab_006::prepare(int* sl_id, int* sl_2_m_i) {
	sl_id = sl_2_m_i = 0;

	cout << "Часть лабораторной работы? ";
	cin >> sublab_id;

	switch (sublab_id)
	{
	default:
		printf("Варианта с номером %d не существует.", sublab_id);
		break;
	case (1):
		digit = '0';
		break;
	case(2):
		cout << "Введите цифру для обнаружения: ";
		cin >> digit;
		cout << "Метод решения?\n1 - Используя индекс\n2 - Используя итератор" << endl;
		cin >> sublab_2_method_id;
		break;
	}

	sl_id = (int*)sublab_id;
	sl_2_m_i = (int*)sublab_2_method_id;
	cout << "Как вы хотите заполнить массив?\n1 - Вручную.\n2 - Генерация случаных чисел" << endl;
	int choise;
	cin >> choise;
	switch (choise) {

	default:
		printf("Варианта с номером %d не существует.", choise);
		break;

	case (1):
		return hand_writing();

	case (2):
		return random_generation();
	};
}

int lab_006::hand_writing() { // Ручной ввод
	for (int i = 0; i < n; i++)
	{
		printf("Введите число для элемента под индексом %d: ", i + 1);
		cin >> arr[i];
	}
	return (sublab_id == 1) ? sublab_1() : (sublab_2_method_id == 1) ? sublab_2_using_index() : sublab_2_using_iteration();
}

int lab_006::random_generation() { // Автоматическая генерация по указаному диапозону.
	int minRng, maxRng;
	cout << "Введите минимальное число диапозона: ";
	cin >> minRng;
	cout << "Введите максимальное число диапозона: ";
	cin >> maxRng;

	arr = RandGen::generate_random_int_arr(n, minRng, maxRng);

	printf("Сгенерированные случайные числа [%d, %d]:", minRng, maxRng); cout << endl << endl;
	for (int i = 0; i < n; i++) {
		std::string temp = std::to_string(arr[i]);
		for (char digit : temp) {
			if (digit == this->digit) {
				cout << "\033[31m" << digit << "\033[0m";
			}
			if (digit != this->digit) {
				cout << digit;
			}
		}
		cout << " ";
	}
	cout << endl << endl;

	return (sublab_id == 1) ? sublab_1() : (sublab_2_method_id == 1) ? sublab_2_using_index() : sublab_2_using_iteration();
}

	// ================================================================================================ Лаба 6.1
int lab_006::sublab_1() {
	int max_zl = 0;
	int zeros_lenght = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] == 0 && arr[i + 1] == 0) {
			zeros_lenght++;
		}

		if (arr[i] == 0 && arr[i + 1] != 0) {
			zeros_lenght++;
			max_zl = max(max_zl, zeros_lenght);
		}

		if (arr[i] != 0) {
			zeros_lenght = 0;
		}
	}

	return max_zl;
}

	// ================================================================================================ Лаба 6.2
int lab_006::sublab_2_using_index() {
	int digid_cnt = 0;

	for (int i = 0; i < n; i++) {
		for (char digit : std::to_string(arr[i])) {
			digid_cnt = (this->digit == digit) ? digid_cnt + 1 : digid_cnt;
		}
	}

	return digid_cnt;
}

int lab_006::sublab_2_using_iteration() {
	int digid_cnt = 0;

	for (int* it = arr; it < arr + n; it++) {
		for (char digit : std::to_string(*it)) {
			digid_cnt = (this->digit == digit) ? digid_cnt + 1 : digid_cnt;
		}
	}

	return digid_cnt;
}