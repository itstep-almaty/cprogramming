#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter n: ";
	cin >> n;
	
	int i = 0;
	int x;
	int sum = 0;
	while (i < n) {
		cout << "enter a number: ";
		cin >> x;
		if (x > 0) sum = sum + x;
		i++;
	}


	cout << "sum = " << sum << endl;
	
}
