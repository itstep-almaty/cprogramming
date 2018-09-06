// считает кол-во слов

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s[1000];
	cin.getline(s, 1000);

	int len = strlen(s);
	int p = 0;

	bool flag = true;
	for (int i = 0; i < len; i++) {
		if (s[i] != ' ' && flag) {
			p++;
			flag = false;
		}
		else
			if (s[i] == ' ') flag = true;
	}

	cout << p << endl;
}
