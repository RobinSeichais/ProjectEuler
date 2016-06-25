#include <stdio.h>
#include <math.h>

int is_prime(unsigned long long n) {

    if (n <= 1) return 0;
    if (n == 2) return 1;

    long i;
    for (i = 3; i*i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char* argv[]) {

    unsigned long long n = 600851475143;
    unsigned long long i = floor(sqrt(n));
    if (i % 2 == 0) i--;

    for (i = i; i > 1; i-=2) {
        if (n % i == 0 && is_prime(i))
            break;
    }

    printf("Result: %llu\n", i);
}
