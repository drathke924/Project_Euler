#include <stdio.h>
#include <stdlib.h>

long long prod(char* in, int count) {
    long long out = 1;
    for (int i=0; i<count; i++) {
        out *= in[i]-'0';
    }
    return out;
}

int main() {
    FILE *input = fopen("Euler_008.txt", "r");
    char buffer[1001];
    int digits = 13;
    long long most = 0;
    for (int i=0; i<1000-digits; i++) {
        fgets(buffer, digits+1, input);
        long long temp = prod(buffer, digits);
        if (temp > most) {most=temp;}
        fseek(input, -1*(digits-1), SEEK_CUR);
    }
    printf("Final Result: %lld\n", most);
    return 0;
}
