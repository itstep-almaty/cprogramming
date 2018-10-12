#include <cstdio>

int main() {
	FILE *f;
	fopen_s(&f, "file.txt", "r+");
	char s[1000];
	fgets(s, 1000, f);
	int pos = ftell(f); // узнает текушую позицию курсора
	printf("pos = %d, s=%s\n", pos,s);
	fseek(f, pos, SEEK_SET); // устанавливает курсор для записи
	fprintf(f,"NEW LINE");
	fclose(f);
}

/* file.txt ДО:
hello world of c++
i love this game
good bye
*/

/* file.txt ПОСЛЕ:
hello world of c++
NEW LINEhis game
good bye
*/
