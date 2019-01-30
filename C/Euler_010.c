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
    long long result = 2;
    for (int i=3; i<2000000; i++) {
        if (isprime(i)) {result += i;}
    }
    printf("Final Result: %lld\n", result);
    return 0;
}
