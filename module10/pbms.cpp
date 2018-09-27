#include <fstream>
#include <iostream>

using namespace std;

struct Contact { // структура контакта
	char name[30];
	char phone[15];
}; 

Contact* book; // динамический массив контактов
int n=0;  // кол-во контактов в памяти
int m=0;
int q = 1;
char bookname[30]; // текущее имя файла
bool saved = true;

void load() {
	ifstream fin(bookname);
	fin >> n;
	
	if (m != 0) delete[] book;

	m = n + q;
	book = new Contact[m];
	
	for (int i = 0; i < n; i++) {
		fin >> book[i].name >> book[i].phone;
	}
	cout << bookname << " loaded" << endl;
	fin.close();
}

void save() {
	ofstream fout(bookname);
	fout << n << "; " << n << endl;
	for (int i = 0; i < n; i++) {
		fout << book[i].name << "; " << book[i].phone << endl;
	}
	cout << "saved as " << bookname << endl;
	fout.close();
}

void create() {
	m = 10;
	n = 0;
	book = new Contact[m];
	cout << bookname << " was created." << endl;
}

void show() {
	cout << bookname << (saved ? " saved" : " not saved") << endl;
	for(int i = 0; i < n; i++)
	{
		cout << i+1 << ". " << book[i].name << " " << book[i].phone << endl;
	}

	cout << "empty slots = " << m - n << endl;
	cout << "all slots = " << m << endl;
}

void add() {
	if (n + 1 <= m) {
		cin >> book[n].name;
		cin >> book[n].phone;
		n++;
	}
	else {
		int mm = m + 1 + q;
		Contact * newbook = new Contact[mm];
		for (int i = 0; i < n; i++) {
			newbook[i] = book[i];
		}
		delete[] book;
		book = newbook;
		
		cin >> book[n].name;
		cin >> book[n].phone;
		n++;
		m = mm;
	}
}

void remove() {
	char name[30];
	cin >> name;

	int k;
	for(k=0;k<n;k++)
		if (strcmp(name, book[k].name) == 0) {
				break;
		}
	if (n > 0 && k != n) {
		for (int i = k; i < n - 1; i++) {
			book[i] = book[i + 1];
		}
		n--;
	}
}

void search() {
	char name[30];
	cin >> name;

	int r=0;
	for (int k = 0; k < n; k++)
		if (strstr(book[k].name, name) != nullptr) {
			cout << k + 1 << ". " << book[k].name << " " << book[k].phone << endl;
			r++;
		}
	cout << r << " contacts found" << endl;
}

void update() {
	int k;
	cin >> k;
	cout << k << ". " << book[k-1].name << " " << book[k-1].phone << endl;
	cout << "Enter new values: ";
	cin >> book[k-1].name;
	cin >> book[k-1].phone;
}

void sort() {
	cout << "sort by name(0) or by phone(1): ";
	int option;
	cin >> option;

	if (option == 0) {
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if (strcmp(book[i].name,book[j].name)>0) {
					Contact t = book[i];
					book[i] = book[j];
					book[j] = t;
				}
	} 
	if (option == 1) {
		for (int i = 0; i<n - 1; i++)
			for (int j = i + 1; j<n; j++)
				if (strcmp(book[i].phone, book[j].phone)>0) {
					Contact t = book[i];
					book[i] = book[j];
					book[j] = t;
				}
	}
}

int main() {
	char com[20];
	cout << "Welcome to PhoneBook Management System" << endl;
	cout << "\nEnter your command: ";
	while (cin >> com) {
		if (strcmp(com, "create") == 0) {
			strcpy_s(bookname,"noname_book.txt");
			create();
		}
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
		if (strcmp(com, "saveas") == 0) {
			cin >> bookname;
			save();
		}
		if (strcmp(com, "show") == 0) {
			show();
		}
		if (strcmp(com, "add") == 0) {
			add();
		}
		if (strcmp(com, "remove") == 0) {
			remove();
		}
		if (strcmp(com, "search") == 0) {
			search();
		}
		if (strcmp(com, "update") == 0) {
			update();
		}

		if (strcmp(com, "sort") == 0) {
			sort();
		}
		cout << "\nEnter your command: ";
	}

}
