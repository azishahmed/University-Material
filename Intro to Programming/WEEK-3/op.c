#include<stdio.h>
#include<stdlib.h>
int main(){
    int a , b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b); 
    printf("%lf\n", a/(float)b);
    return 0;
}