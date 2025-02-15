#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
    int a = 5, *p;
    p=&a;
    *p=a+*p-2;
printf("%d\n",a);
}
void second(){
    int k = 4, j=10, *p, *q;
    p=&k; q=&j;
    *p+=*p+55+k-*q;
printf("%d %d\n",j,*p+*q);
}
void third(){
    int a=10, b=20, *p, *q;
p=&a; q=&b;
*p += (*q)++ - 15;
printf("%d %d\n", a,*q);
*q+=*p;
printf("%d %d\n", a,*q);
}
int main(){
    //first();
    //second();
    third();
    return EXIT_SUCCESS;
}