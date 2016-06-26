#include <stdio.h>
#include <math.h>

int is_prime(long n);

int main(int argc, char* argv[])
{
	long n = 3;
	int i = 1;
	while (i < 10001) {
		if (is_prime(n)) i++;
		n += 2;
	}
	printf("Result: %ld\n", n-2);
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