#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
// void first(){
// int A[45], i;
// for (i=0; i < 45; ++i )
//     A[i] = 2*(i-3);
// printf("%d %d\n",*(A+25), A[i-3]);
// }
void second(){
    int B[25], i;
for (i=0; i < 20; ++i )
B[i] = 4*(2*i+1);
printf("%d %d\n", *(B+23), B[i-7]);
}
int main(){
    //first();
    second();
    return EXIT_SUCCESS;
}