#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 20, j;
	while (1) {
		for (j = 20; j > 1; j--) {
			if (n % j != 0) break;
		}
		if (j == 1) break;
		n += 2; /* Only try even numbers */
	}
	printf("Result: %d\n", n);
}