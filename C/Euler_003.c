#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int a) {
    for (int i=2;i<sqrt(a);i++) {
        if (a%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
int max=0;
for (int i=1; i<sqrt(600851475143)-1;i+=2) {
    if (600851475143%i==0 && isprime(i)) {max=i;}
}
printf("Final Result: %d\n", max);
return 0;
}
