#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
void val(){
int a=3, b=5, max, c;
max=a>b ? a : b;
c=a<b ? b++ : ++a;
printf("max=%d c=%d\n", max, c);
}


void value(){
int i=3, j=1, k=2;
k+=-i+++j;
printf("i=%d j=%d k=%d\n", i, j, k);
}


void values(){
int i=3, j=1, k=2;
k+=++i+--j;
printf("i=%d j=%d k=%d\n", i, j, k);
}

void valuez(){
int i=3, j=1, k=2;
k=-i+++j;
printf("i=%d j=%d k=%d\n", i, j, k);
}


void valuees(){
int i=3, j=1, k=2;
k=--i-j--;
printf("i=%d j=%d k=%d\n", i, j, k);
}

void valuee(){
int i=3, j=1, k=2;
k=++i+j++;
printf("i=%d j=%d k=%d\n", i, j, k);
}

void valu(){
int i=3, j=1, k=2;
k = i+++j;
printf("i=%d j=%d k=%d\n", i, j, k);
}

void abc(){
    int a, b, c;
    printf("%d %d %d\n",sizeof(a,b,c));
a = b = c = 9; printf("a=%d b=%d c=%d\n", a, b, c);
c = a++ * (b%4); printf("a=%d b=%d c=%d\n", a, b, c);
c = a < b ? a*2 : b/3; printf("a=%d b=%d c=%d\n", a, b, c);
b--; a++; printf("a=%d b=%d c=%d\n", a, b, c);
}

int main(){
    abc();
    return 0;

}