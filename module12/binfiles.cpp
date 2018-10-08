#include <cstdio>
#include <cstring>

struct Student {
	char name[50];
	int id;
};

int main() {
	
	FILE * f;
	/*
	fopen_s(&f, "file.apple", "wt");
	int a = 5;
	int b = 7;
	fprintf(f,"%d %d\n",a,b);
	fclose(f);
	*/
	/*
	fopen_s(&f, "file.apple", "rt");
	int a=0, b = 0;
	fscanf_s(f, "%d", &a);
	fscanf_s(f, "%d", &b);
	printf("a=%d, b=%d\n",a,b);
	fclose(f);
	*/

    /*
	fopen_s(&f, "file.apple", "wb");
	
	int a[5] = { 3,4,5,6,7 };
	double d = 1.6;
	fwrite(a, sizeof(int), 5, f);
	fwrite(&d, sizeof(double), 1, f);

	Student s;
	strcpy_s(s.name,"Vasya");
	s.id = 17;
	fwrite(&s, sizeof(Student), 1, f);

	fclose(f);
	*/

	
	fopen_s(&f, "file.apple", "rb");
	int a[5] = { 0,0,0,0,0 };
	fread(a, sizeof(int), 5, f);
	for(int i=0;i<5;i++) printf("a[%d]=%d\n", i, a[i]);
	double x;
	fread(&x, sizeof(double), 1, f);
	printf("x = %f\n",x);

	Student s;
	fread(&s, sizeof(Student), 1, f);
	printf("s.name = %s, s.id=%d\n", s.name,s.id);
	fclose(f);
	
}
