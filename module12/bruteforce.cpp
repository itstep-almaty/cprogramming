// полный перебор используя битовые операции, (brute force)
#include <cstdio>

// 0000 0001
// 0000 0010
// 0000 0100
// 0000 1000

int W[] = { 3, 4, -2, 1 };

int main() {
	unsigned i;
	for (i = 0U; i <= 15; i++) { // opt
		int sum = 0;
		if (i & 1U) { printf("A "); sum += W[0]; }
		if (i & 2U) { printf("B "); sum += W[1]; }
		if (i & 4U) { printf("C "); sum += W[2]; }
		if (i & 8U) { printf("D "); sum += W[3]; }
		printf("sum = %d\n",sum);
	}
}
