#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
    float f[100]={3.14, -12, 45};
    printf("%.2f",f[0]);
}
int main(){
    first();
    return EXIT_SUCCESS;
}