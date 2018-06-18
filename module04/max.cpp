#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int m = x;
	while (x!=0) {
		if (x > m) m = x;
		cin >> x;
	}
}
