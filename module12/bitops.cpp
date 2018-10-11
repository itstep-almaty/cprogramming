#include <cstdio>

int main() {
	// bitwise AND &
	// bitwise OR |
	// bitwise XOR ^
	// bitwise NOT ~
	// right shift >> 
	// left shift <<


	unsigned int x = 5U;
	unsigned int y = 6U;

	printf("%u & %u = %u\n", x, y, x & y);
	printf("%u | %u = %u\n", x, y, x | y);
	printf("%u ^ %u = %u\n", x, y, x ^ y);
	printf("~%u = %u\n",x, ~x);

	unsigned int a = 1U;
	for(int i=0;i<65;i++)
	printf("%u << %u = %u\n", a, i, a << i);

	unsigned int b = 0x80000000U; // 1000 0000 0000 0000 0000 0000 0000 0000
	for (int i = 0; i<33; i++)
	printf("%u >> %u = %u\n", b, i, b >> i);
}
