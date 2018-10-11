#include <cstdio>

const unsigned int KAZAKH = 1U;   // ... 00000001
const unsigned int RUSSIAN = 2U;  // ... 00000010
const unsigned int ENGLISH = 4U;  // ... 00000100
const unsigned int CHINESE = 8U;  // ... 00001000
const unsigned int TURKISH = 16U; // ... 00010000

void printhello(unsigned opt = 1U) {
	if (opt & KAZAKH)  printf("Salem\n");
	if (opt & RUSSIAN) printf("Privet\n");
	if (opt & ENGLISH) printf("Hello\n");
	if (opt & CHINESE) printf("Nihau\n");
	if (opt & TURKISH) printf("Selam\n");
}
int main() {
	printhello(KAZAKH | TURKISH | CHINESE);
}
