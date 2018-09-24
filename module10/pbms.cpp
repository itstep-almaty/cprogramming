#include <fstream>
#include <iostream>
using namespace std;

struct Contact { // структура контакта
	char name[30];
	char phone[15];
}; 

Contact* book; // динамический массив контактов
int n;  // кол-во контактов в памяти
char bookname[30]; // текущее имя файла

void load() {
	ifstream fin(bookname);
	fin >> n;
	book = new Contact[n];

	for (int i = 0; i < n; i++) {
		fin >> book[i].name >> book[i].phone;
	}
	cout << bookname << " loaded" << endl;
	fin.close();
}

void save() {
	ofstream fout(bookname);
	fout << n << endl;
	for (int i = 0; i < n; i++) {
		fout << book[i].name << " " << book[i].phone << endl;
	}
	cout << "saved as " << bookname << endl;
	fout.close();
}

int main() {
	char com[20];
	cout << "Welcome to PhoneBook Management System" << endl;
	cout << "\nEnter your command: ";
	while (cin >> com) {
		if (strcmp(com, "load")==0) {
			cin >> bookname;
			load();
		}
		if (strcmp(com, "exit")==0) {
			break;
		}
		if (strcmp(com, "save")==0) {
			save();				
		}
		cout << "\nEnter your command: ";
	}

}
