#include <cstdio>

int main() {
	FILE *f1,*f2;
	fopen_s(&f1,"file1.txt","r"); // f1 = handle for file1.txt
	fopen_s(&f2,"file2.txt", "w"); // f2 = handle for file2.txt

	char s[2][1000];
	int k = 0;
	fgets(s[k], 1000, f1);
	while (fgets(s[1-k], 1000, f1)) {
		fprintf(f2,"%s",s[k]);
		k = 1-k;
		// k = (k == 0 ? 1 : 0);
		// k = !k;
	}
	fclose(f1);
	fclose(f2);

	
}
