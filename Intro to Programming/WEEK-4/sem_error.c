// Semantics Error: Incorrect logic
#include <stdio.h>

int main() {
    int a = 5, b = 0;
    int result = a / b; // Division by zero
    printf("Result: %d\n", result);
    return 0;
}


//CORRECTION TO FIND ERROR
/*
int null() {
    int a = 5, b = 0;
    
    if (b == 0) {
        printf("Error: Division by zero\n");
    } else {
        int result = a / b;
        printf("Result: %d\n", result);
    }
    
    return 0;
}
*/