#include <random>
using namespace std;
class rnd {
public:
	int minRng, maxRng;
	rnd(int minRng, int maxRng) : minRng(minRng), maxRng(maxRng) {}

	int* generate_random_int_arr(int size) {
		int* temp_arr_GRIA = new int[size];

		std::random_device rnd;
		std::mt19937 gen(rnd());
		std::uniform_int_distribution<> distr(minRng, maxRng);

		for (int i = 0; i < size; i++) {
			temp_arr_GRIA[i] = distr(gen);
		}

		return temp_arr_GRIA;
	}
};