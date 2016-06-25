#include <stdio.h>
#include <math.h>

int is_palindromic(int n);

int main(int argc, char* argv[]) {
    if (is_palindromic(121)) printf("yes\n");
    else printf("no\n");
}

int is_palindromic(int n) {
    if (n < 10) return 1;
    int x = 10, m = 1, i;
    while (n > x) {
        x *= 10;
        m++;
    }
    printf("%d\n", m);
    for (i = 0; i <= m/2; i++) {
    printf("%f\n", pow(10, i));
    printf("%f\n", pow(10, m-i));
        if (n/pow(10, i) != n/pow(10, m-i))
            return 0;
    }
    return 1;
}
