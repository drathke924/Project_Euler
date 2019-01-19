#include <stdio.h>
#include <stdlib.h>

int rev(int a) {
    int ones, tens, huns, thou, tenthou, hunthou;
    ones = a%10;
    tens = (a%100-a%10)/10;
    huns = (a%1000-a%100)/100;
    thou = (a%10000-a%1000)/1000;
    tenthou = (a%100000-a%10000)/10000;
    hunthou = (a-a%100000)/100000;
    return ones*100000+tens*10000+huns*1000+thou*100+tenthou*10+hunthou;
}

int main() {
    int max=0;
    for (int i=100; i<999; i++) {
        for (int j=i; j<1000; j++) {
            int num = i*j;
            if (num == rev(num) && num>max) {
                max = num;
            }
        }
    }
    printf("Final Result: %d\n", max);
return 0;
}
