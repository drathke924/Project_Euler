#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDivisors(int n) {
    int out=1;
    for (int i=1; i<sqrt(n); i++) {
        if (n%i==0) {
            out+=2;
        }
    }
    if (n%(int)sqrt(n) == 0) {out++;}
    return out;
}

int main() {
    int n=1;
    for (int i=1; i<100000000; i+=n) {
        n++;
        if (numDivisors(i) > 500) {
            printf("Final Result: %d\n", i);
            break;
        }
    }
    return 0;
}
