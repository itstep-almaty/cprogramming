
#include <iostream>
#include <cstdlib> // rand(), srand() s=seed
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL)); // delaet seed = tekushee vremya

	int i = 0;
	double sum1 = 0.0;
	double r1;
	while (i < 10) {
		r1 = 1 + rand() % 10;
		sum1 += r1;
		cout << r1 << " "; // 1 ... 10
		i++;
	}
	cout << sum1 / 10 << endl;

	int j = 0;
	double sum2 = 0.0;
	double r2;
	while (j < 10) {
		r2 = 1 + rand() % 10;
		sum2 += r2;
		cout << r2 << " "; // 1 ... 10
		j++;
	}
	cout << sum2 / 10 << endl;

	int k = 0;
	double sum3 = 0.0;
	double r3;
	while (k < 10) {
		r3 = 1 + rand() % 10;
		sum3 += r3;
		cout << r3 << " "; // 1 ... 10
		k++;
	}
	cout << sum3/10 << endl;

}
