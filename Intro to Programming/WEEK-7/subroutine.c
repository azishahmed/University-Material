#include <stdio.h>

// Function declaration
int square(int num);

int main() {
    int num=5;
    int result = square(num);
    printf("Square of %d is %d\n", num, result);
    return 0;
}

// Function definition
int square(int num) {
    return num * num;
}