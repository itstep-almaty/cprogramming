#include <cstdio>

int main() {
	FILE *f1,*f2;
	fopen_s(&f1,"file1.txt","r"); // f1 = handle for file1.txt
	fopen_s(&f2,"file2.txt", "w"); // f2 = handle for file2.txt

	char* s0= new char[1000]; // pred
	char* s1= new char[1000]; // cur
	
	fgets(s0, 1000, f1); 
	while (fgets(s1, 1000, f1)) { 
		fprintf(f2,"%s",s0); 
		char * t = s0;
		s0 = s1;
		s1 = s0;
	}

	delete[] s0;
	delete[] s1;
	fclose(f1);
	fclose(f2);

	
}
