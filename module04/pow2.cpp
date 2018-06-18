#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int i = 0;
	int p = 1;
	while (i <= n) {
		cout << "2^" << i << " = " << p << endl;
		p = p*2;
		i++;
	}
}
