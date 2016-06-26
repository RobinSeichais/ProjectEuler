#include <stdio.h>
#include <math.h>

int is_prime(long n);

int main(int argc, char* argv[])
{
	unsigned long i, sum = 2;
	for (i = 3; i < 2000000; i+=2) {
		if (is_prime(i))
			sum += i;
	}

	printf("Result: %lu\n", sum);
}

int is_prime(long n)
{
	long i, m = floor(sqrt(n));
	for (i = 2; i <= m; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}