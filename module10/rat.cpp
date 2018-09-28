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

int main() {
	Rational r1 = newRational(2,4);
	Rational r2 = newRational(2,3);

	print(r1);
	print(r2);
}
