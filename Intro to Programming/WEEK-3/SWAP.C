#include <stdio.h>
#include <stdlib.h>

void aux_var(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a=%d b=%d\n", *a, *b);
}

void art_op(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("a=%d b=%d\n", *a, *b);
}
void bit_op(int *a, int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
    printf("a=%d b=%d\n", *a, *b);
}
int main() {
    int a, b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    //aux_var(&a, &b); // Passing addresses of a and b to aux_var
    //art_op(&a,&b);
    bit_op(&a,&b);
    return 0;
}
