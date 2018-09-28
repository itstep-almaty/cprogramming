/*
Rational newRational(int n, int m); // инициализирует
void print(Rational r, char del='\n') // печатает
void read(Rational &r); // читает

void simplify(Rational& r); // упрощает дробь
int gcd(int n, int m); // для упрощения дополнительная функция, НОД

// арифметические операции
r3 = add(r1,r2), add(r,int) add(int,r)
r3 = sub(r1,r2)
r3 = mul(r1,r2)
r3 = div(r1,r2)
r2 = inv(r1)
// операции сравнения
bool lt(r1,r2)
bool gt(r1,r2)
bool le(r1,r2)
bool ge(r1,r2)
bool eq(r1,r2)
bool ne(r1,r2)

C: no operators
C++: yes operators
*/

#include <iostream>
using namespace std;

struct Rational {
	int n; // числитель numerator
	int m; // знаменатель denominator
};


Rational newRational(int n, int m) {
	Rational r;
	r.n = n;
	r.m = m;
	return r;
}

void print(Rational r, char del='\n') {
	cout << r.n << "/" << r.m << del;
}


Rational add(Rational r1, Rational r2) {
	Rational r3;
	r3.m = r1.m*r2.m;
	r3.n = r1.n*r2.m + r2.n*r1.m;
	return r3;
}
Rational add(Rational r, int n) {
	return add(r, newRational(n, 1));
}
Rational add(int n, Rational r) {
	return add(newRational(n, 1),r);
}

void read(Rational &r) {
	cin >> r.n;
	cin.ignore();
	cin >> r.m;
}

int main() {
	Rational r1 = newRational(2,4);
	Rational r2 = newRational(2,3);

	print(r1);
	print(r2);

	Rational r3 = add(r1, r2);
	print(r3);

	print(add(5, r2));
	print(add(r2, 5));

	read(r3);
	print(r3);
}
