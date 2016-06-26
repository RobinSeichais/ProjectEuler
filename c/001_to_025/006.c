#include <stdio.h>

int main(int argc, char* argv[])
{
	unsigned long a = 0, b = 0;
	int i;
	for (i = 1; i <= 100; i++) {
		a += i;
		b += i*i;
	}
	unsigned long res = a*a - b;
	printf("Result: %lu\n", res);
}