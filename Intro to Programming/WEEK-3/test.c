#include <stdio.h>
#include <stdlib.h>
int main(){
int a, b, i;
float j;
scanf("%d", &a);
scanf("%d %d", &a, &b);
scanf("%d %f", &i, &j); 
printf("The values of a,b,i and j are %d %d %d %f respectively",a,b,i,j);

    return EXIT_SUCCESS;
}