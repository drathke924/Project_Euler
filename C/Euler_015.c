#include <stdio.h>
#include <stdlib.h>

int main() {
    long long result=1, n=40;
    for (long long i=1; i<=20; i++) {
        result = result * (n+1-i)/i;
        printf("%lld, %lld\n", i, result);
    }
    printf("Final Result: %lld", result);
    return 0;
}
