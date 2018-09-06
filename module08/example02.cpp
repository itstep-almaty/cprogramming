// переводит первую букву каждого предложения в верхний регистр
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s[10000]="";
	char line[10000];

	while (cin.getline(line, 10000)) {
		strcat_s(s, line);
		strcat_s(s, "\n");
	}
	
	bool flag = true;
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (isalpha(s[i]) && flag) {
			if (islower(s[i])) s[i] = toupper(s[i]);
			flag = false;
		}
		else
			if (s[i] == '.') flag = true;
	}
	cout << s << endl;
}
