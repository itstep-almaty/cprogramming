#include <cstdio>
#include <cstdlib>

int main() {
	FILE *f1, *f2;
	fopen_s(&f1, "file1.txt", "r"); // f1 = handle for file1.txt
	fopen_s(&f2, "file2.txt", "w"); // f2 = handle for file2.txt

	char* s0 = (char*)calloc(1000, sizeof(char)); // pred
	char* s1 = (char*)malloc(sizeof(char)*1000); // cur

	fgets(s0, 1000, f1);
	while (fgets(s1, 1000, f1)) {
		fprintf(f2, "%s", s0);
		char * t = s0;
		s0 = s1;
		s1 = t;
	}

	free(s0);
	free(s1);

	fclose(f1);
	fclose(f2);


}

