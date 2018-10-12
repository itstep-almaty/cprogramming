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
				fprintf(f2,"%c", A[j]);
			}

			p = strchr(a, ch);
			if (p != NULL) {
				int j = (p - a + 3) % strlen(a);
				fprintf(f2,"%c", a[j]);
			}
		}
		else 
			fprintf(f2,"%c", ch);
	}
	fclose(f1);
	fclose(f2);
}
/* file1.txt:
Съешь же ещё этих мягких французских булок, да выпей чаю.
Съешь
же ещё этих
мягких французских булок,
да выпей чаю.
*/

/* file2.txt:
Фэзыя йз зьи ахлш пвёнлш чугрщцкфнлш дцосн, жг еютзм ъгб.
Фэзыя
йз зьи ахлш
пвёнлш чугрщцкфнлш дцосн,
жг еютзм ъгб.
*/
