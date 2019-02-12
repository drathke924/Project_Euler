#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* input = fopen("Euler_013.txt", "r");
    if (input == NULL) {
        printf("Borked");
        return 1;
    }
    char buffer[51];
    char* ptr;
    double result = 0;
    for (int i=0; i<100; i++) {
        double temp;
        fseek(input, 52*i, SEEK_SET);
        fgets(buffer, 50, input);
        sscanf(buffer, "%lf", &temp);
        result += temp;
    }
    while (result>10000000000) {result/=10;}
    printf("Final Result: %.0lf\n", result);
    return 0;
}
