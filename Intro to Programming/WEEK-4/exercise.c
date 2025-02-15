#include<stdio.h>
#include<stdlib.h>
void first(){
int i=7, j=5, k;
if (i>=j && 0)
k=3;
else
k=1;
printf("k=%d\n", k);
}
void second(){
    int i=7, j=5, k;
    if (i>=j || 5)
    k=8;
    else
    k=5;
    printf("k=%d\n", k);
}
void third(){
    int i=-5, j=3, k=1;
    if (i=!j || k)
    k=-8 * (--i || j);
    else
    k=-17 * (i++ && k);
    printf("i=%d\tj=%d\tk=%d\n", i, j, k);
}
void fourth(){
    int i=5, j=10, k=2;
    if (j=k && i!=j)
    {
    k+=j;
    j+=--i;
    }
    else
    k*= -(i+j);
    printf("i=%d\tj=%d\tk=%d\n", i, j, k);
}
int main(){
    first();
    second();
    third();
    fourth();
    return 0;
}