#include <stdio.h>
#include <stdlib.h>
void one(){
    int a = 15, b = 15, c = 15;
    c = (a%2) + (a=!b);
    printf("a=%d b=%d c=%d\n", a, b, c);
}
void two(){
    int a = 2, b = 5, c = 15;
    c = a < b ? ++a : b++;
    printf("a=%d b=%d c=%d\n", a, b, c);
}
void three(){
    int a = 2, b = 15, c = 1;
    b=4/3*c*c; a=b!=a; 
    printf("a=%d b=%d c=%d\n", a, b, c);
}
void four(){
    int a = 15, b = 15, c = 15;
    c = (a%2) + (a!=b); 
    printf("a=%d b=%d c=%d\n", a, b, c);
}
void five(){
    int a = 2, b = 5, c = 15;
    c = a > b ? ++a : b++; 
    printf("a=%d b=%d c=%d\n", a, b, c);
}
void six(){
    int a = 2, b = 15, c = 1;
    b=4/3*c*c; a=b=!a; 
    printf("a=%d b=%d c=%d\n", a, b, c);
}
int main(){
    one();
    two();
    three();
    four();
    five();
    six();
    return 0;
}