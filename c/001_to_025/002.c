#include <stdio.h>

int main(int argc, char* argv[]) {

	int a = 1, b = 1, sum = 0, tmp;
	while (a <= 4000000) {
		if (a % 2 == 0) sum += a;
		tmp = a;
		a = b;
		b = tmp + b;
	}
	printf("Result: %d\n", sum);
}
