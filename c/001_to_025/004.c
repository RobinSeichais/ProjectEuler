#include <stdio.h>
#include <math.h>

int is_palindromic(int n);

int main(int argc, char* argv[])
{
    int i, j, k, m = 0;
    for (i = 100; i < 1000; i++) {
        for (j = i; j < 1000; j++) {
            k = i*j;
            if (is_palindromic(k) && k > m)
                m = k;
        }
    }
    printf("Result: %d\n", m);
    return 0;
}

int is_palindromic(int n)
{
    int i, d = 1 + log10(n);
    for (i = 0; i < floor(d/2); i++) {
        if ((int) (n / pow(10, d-1-i)) % 10 != (int) (n / pow(10, i)) % 10)
            return 0;
    }
    return 1;
}
