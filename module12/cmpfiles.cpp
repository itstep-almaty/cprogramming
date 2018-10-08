// сравнение двух файлов, имена которых заданы как аргументы командной строки
//
#include <cstring>
#include <cstdio>

using namespace std;

int main(int n, char* a[]) { // command-line arguments
	FILE *f1;
	FILE *f2;

	fopen_s(&f1,a[1],"rt"); // f1 = fopen(a[1],"rt");
	fopen_s(&f2,a[2], "rt"); // f2 = fopen(a[2],"rt");

	char s1[1000];
	char s2[1000];

	// 13123 => true
	// 0 => false
	int i = 0;
	char* b1 = fgets(s1, 1000, f1); // first from f1
	char* b2 = fgets(s2, 1000, f2); // first from f2

	while (b1 || b2){ 
		i++;
		if (b1 && b2 && strcmp(s1, s2)!=0) {
			printf("-------------------------lines %d:\n",i);
			printf("f1: %s", s1);
			printf("f2: %s", s2);
		} 
		if (b1 && !b2) {
			printf("-------------------------lines %d:\n", i);
			printf("f1: %s", s1);
		}
		if (!b1 && b2) {
			printf("-------------------------lines %d:\n", i);
			printf("f2: %s", s2);
		}
		if(b1) b1 = fgets(s1, 1000, f1);
		if(b2) b2 = fgets(s2, 1000, f2);
	}
	return 0;
}
