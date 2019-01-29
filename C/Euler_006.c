#include <stdio.h>
#include <stdlib.h>

int main() {
    long squaresum = 0, sumtosquare = 0;
    for (int i=1; i<=100; i++) {
        squaresum += i*i;
        sumtosquare += i;
    }
    printf("Final Result: %ld\n", sumtosquare*sumtosquare - squaresum);
    return 0;
}
