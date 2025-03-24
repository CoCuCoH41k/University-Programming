#include <cmath>
#include <stdio.h>
#include <iostream>
#include <random>
using namespace std;
class lab_006 {
public:
	int n;
	int* arr;
	lab_006(int n) {
		this->n = n;
		arr = new int[n];
	}

	int prepare() {
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
		}
	}

	int hand_writing() { // Ручной ввод
		for (int i = 0; i < n; i++)
		{
			printf("Введите число для элемента под индексом %d: ", i + 1);
			cin >> arr[i];
		}
		return calc();
	}

	int random_generation() { // Автоматическая генерация по указаному диапозону.
		int minRng, maxRng;
		cout << "Введите минимальное число диапозона: ";
		cin >> minRng;
		cout << "Введите максимальное число диапозона: ";
		cin >> maxRng;

		std::random_device rnd;
		std::mt19937 gen(rnd());
		std::uniform_int_distribution<> distr(minRng, maxRng);

		for (int i = 0; i < n; i++) {
			this->arr[i] = distr(gen);
		}

		printf("Сгенерированные случайные числа [%d, %d]:", minRng, maxRng); cout << endl << endl;
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				cout << "\033[31m" << arr[i] << "\033[0m" << " ";
			}
			else {
				cout << arr[i] << " ";
			}
		}
		cout << endl << endl;

		return calc();
	}
private:
	int calc() {
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
};