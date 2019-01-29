#include <stdio.h>
#include <stdlib.h>

int main() {
    for (long long i=20;i>0;i+=20) {
        int found = 1;
        for (long long j=1; j<=20; j++) {
            if (i%j != 0) {
                found = 0;
                break;
            }
        }
        if (found==1) {
            printf("Final Result: %lld\n", i);
            break;
        }
    }
    return 0;
}
