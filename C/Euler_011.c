#include <stdio.h>
#include <stdlib.h>

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
            if (hori > result) {result = hori;}
            if (vert > result) {result = vert;}
            if (diag > result) {result = diag;}
            if (ldiag > result) {result = ldiag;}
        }
    }
    printf("Final Result: %d\n", result);
    return 0;
}
