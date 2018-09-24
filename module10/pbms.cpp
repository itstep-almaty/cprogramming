#include <fstream>
#include <iostream>
using namespace std;

struct Contact {
	char name[30];
	char phone[15];
};

Contact* book;
int n;
char bookname[30];

void load(char bookname[]) {
	ifstream fin(bookname);
	fin >> n;
	book = new Contact[n];

	for (int i = 0; i < n; i++) {
		fin >> book[i].name >> book[i].phone;
	}
	cout << bookname << " loaded" << endl;
	fin.close();
}

void save(char bookname[]) {
	ofstream fout(bookname);
	fout << n << endl;
	for (int i = 0; i < n; i++) {
		fout << book[i].name << " " << book[i].phone << endl;
	}
	cout << bookname << " saved" << endl;
	fout.close();
}

int main() {
	char com[20];
	cout << "Welcome to PhoneBook Management System" << endl;
	cout << "\nEnter your command: ";
	while (cin >> com) {
		if (strcmp(com, "load")==0) {
			cin >> bookname;
			load(bookname);
		}
		if (strcmp(com, "exit")==0) {
			break;
		}
		if (strcmp(com, "save")==0) {
			save(bookname);
		}
		cout << "\nEnter your command: ";
	}

}
