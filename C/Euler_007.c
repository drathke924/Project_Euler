#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int a) {
    for (int i=2;i<=sqrt(a);i++) {
        if (a%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num = 3, primes = 1;
    while (1) {
        if (isprime(num)) {
            primes++;
            if (primes == 10001) {
                printf("Final Result: %d\n", num);
                break;
            }
        }
        num++;
    }
    return 0;
}
