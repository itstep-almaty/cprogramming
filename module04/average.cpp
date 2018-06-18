#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter n: ";
	cin >> n;

	int i = 0;
	double x;
	double sum = 0;
	while (i < n) {
		cout << "enter a number: ";
		cin >> x;
		sum = sum + x;
		i++;
	}


	cout << "average = " << sum/n << endl;

}
