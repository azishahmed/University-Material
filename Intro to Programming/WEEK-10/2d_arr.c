#include<stdio.h>
int main(){
    float b[50][50]={0};
for (int i = 0; i < 50; i++) {
        // Iterate over each column
        for (int j = 0; j < 50; j++) {
            // Print each element with two decimal precision
            printf("%.2f ", b[i][j]);
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}