#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
int B[40], i;
for (i=0; i <= 27; i++ )
B[i] = 2*i+2;
printf("%d %d\n", B[7], B[i-18]);

}
int main(){
    first();
    return EXIT_SUCCESS;
}