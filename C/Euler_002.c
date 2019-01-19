#include <stdio.h>
#include <stdlib.h>

int fib(int a, int b) {
    return a + b;
}

int main() {
    int temp, curr=1, next=2, result=2;
    while (fib(curr, next) < 4000000) {
        temp = fib(curr, next);
        if (temp%2==0) {result+=temp;}
        curr = next;
        next = temp;
    }
    printf("Final Result: %d\n", result);
    return 0;
}
