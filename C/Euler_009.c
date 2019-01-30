#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int a=1; a<333; a++) {
        for (int b=a+1; b<999; b++) {
            int c = 1000-b-a;
            if(c<=b){break;}
            if (a*a+b*b==c*c) {
                printf("Final Result: %ld\n", a*b*c);
                return 0;
            }
        }
    }
    return 0;
}
