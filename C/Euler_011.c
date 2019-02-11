#include <stdio.h>
#include <stdlib.h>

int max(int arr[5]) {
    int out = 0;
    for (int i=0; i<5; i++) {
        if (arr[i] > out) {out = arr[i];}
    }
    return out;
}

int main() {
    FILE *input = fopen("Euler_011.txt", "r");
    int arr[20][20], in;
    for (int i=0; i<20; i++) {
        for (int j=0; j<20; j++) {
            fscanf(input, "%d ", &in);
            arr[j][i] = in;
        }
    }
    int result = 0;
    for (int i=0; i<20; i++) {
        for (int j=0; j<20; j++) {
            int hori = 1, vert = 1, diag = 1, ldiag = 1;
            for (int k=0; k<4; k++) {
                if (j<17) {hori *= arr[j+k][i];}
                if (i<17) {vert *= arr[j][i+k];}
                if (j<17 && i<17) {diag *= arr[j+k][i+k];}
                if (j>=3 && i<17) {ldiag *= arr[j-k][i+k];}
            }
            int a[5] = {result, hori, vert, diag, ldiag};
            result = max(a);
        }
    }
    printf("Final Result: %d\n", result);
    return 0;
}
