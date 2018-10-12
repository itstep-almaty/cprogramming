#include <cstdio>
#include <cctype>
#include <iostream>

char A[] = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
char a[] = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";

int main() {
	setlocale(LC_ALL, "Russian");
	FILE *f1;
	fopen_s(&f1, "file1.txt", "r");
	FILE *f2;
	fopen_s(&f2, "file2.txt", "w");

	int ch;
	while ((ch = fgetc(f1)) != EOF) {
		if (isalpha(ch))
		{
			char* p = strchr(A, ch);
			if (p != NULL) {
				int j = (p - A + 3) % strlen(A);
				printf("%c", A[j]);
			}

			p = strchr(a, ch);
			if (p != NULL) {
				int j = (p - a + 3) % strlen(a);
				printf("%c", a[j]);
			}
		}
		else 
			printf("%c", ch);
	}

	printf("\n");
	fclose(f1);
	fclose(f2);
}
// Съешь же ещё этих мягких французских булок, да выпей чаю.
// Фэзыя йз зьи ахлш пвёнлш чугрщцкфнлш дцосн, жг еютзм ъгб.
