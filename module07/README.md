0. [Локальные и глобальные переменные](https://foxford.ru/wiki/informatika/lokalnye-i-globalnye-peremennye)
2. [Модель памяти](https://foxford.ru/wiki/informatika/model-pamyati-prilozheniya)
3. Указатели. Адрес переменной. Оператор &. Оператор разыменования \* (он же оператор косвенной адресации)
  * [Указатели](https://foxford.ru/wiki/informatika/ukazateli-v-s) 
  * [Указатели в C/C++ для новичков](https://jakeroid.com/ru/blog/ukazateli-v-c-c-dlya-novichkov-chast-1.html)
  * [Указатели от матмеха СПбГУ](http://www.math.spbu.ru/user/dlebedin/ncpp4.pdf)

4. [Адресная арифметика](https://foxford.ru/wiki/informatika/adresnaya-arifmetika-v-s)

5. Родство массивов и указателей.
  * https://foxford.ru/wiki/informatika/massivy-v-s
  * https://foxford.ru/wiki/informatika/opredelenie-i-initsializatsiya-massiva-v-s
  * https://foxford.ru/wiki/informatika/peredacha-massiva-v-funktsiyu-i-vozvrat-iz-funktsii-v-s
  * https://foxford.ru/wiki/informatika/preobrazovanie-tipa-ukazatelya-v-s

6.	Константный указатель и указатель на константу.

7.	Передача аргументов внутрь функции:
  * передача по значению;
  * передача по ссылке;
  * [передача по указателю](https://foxford.ru/wiki/informatika/peredacha-parametra-po-ukazatelyu-v-s)
  
9.	Указатель на функцию:
  * понятие адреса функции;
  * необходимость использования указателя на функцию;
  * синтаксис объявления указателя на функцию;
  * примеры использования указателя на функцию, массива указателей на функции.
  ```cpp
  #include <iostream>
using namespace std;

bool comp1(int x, int y) {
	return x < y;
}

bool comp2(int x, int y) {
	return x > y;
}

bool comp3(int x, int y) {
	if (x % 2 == 0 && y % 2 != 0) return true;
	if (x % 2 != 0 && y % 2 == 0) return false;
	return x>y;
}

void super_sort(int A[], int n, bool (*compare)(int,int) ) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (compare(A[i], A[j])) {
				swap(A[i], A[j]);
			}
		}
	}
}

// тип (*имя_указателя) (параметры);
int main() {
	int A[10] = { 1,2,3,4,666,5,6,7,8,9 };
	int n = 10;
	super_sort(A, n, &comp1);
	for (int i = 0; i < n; i++) cout << A[i] << " ";
	cout << endl;
	super_sort(A, n, comp2);
	for (int i = 0; i < n; i++) cout << A[i] << " ";
	cout << endl;
	super_sort(A, n, comp3);
	for (int i = 0; i < n; i++) cout << A[i] << " ";
	cout << endl;
}
```
  
  

  
