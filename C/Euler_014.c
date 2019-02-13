#include <stdio.h>
#include <stdlib.h>

int main() {
    long long *seen = malloc(sizeof(long long)*1000000 + 1);
    int longest = 0, longmax = 0;
    seen[1] = 1;
    for (int i=0; i<1000000; i++) {
        seen[i] = 0;
    }
    for (int i=1; i<1000000; i++) {
        long long num = i, chain = 1;
        while (num != 1) {
            if (num%2==0) {num/=2;}
            else {num = num*3 + 1;}
            if (num < 1000000 && seen[num] != 0) {
                seen[i] = chain + seen[num];
                break;
            }
            chain++;
        }
        if (seen[i] == 0) {seen[i] = chain;}
        if (seen[i] > longmax) {
            longmax = seen[i];
            longest = i;
        }
    }
    printf("Final Result: %d\n", longest);
    return 0;
}
