#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
    int a,b,r;
    scanf("%d\n%d",&a,&b);
    while((r = a%b)!=0){
        a = b;
        b = r;
    }
printf("GCD=%d",b);
}
void second(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    while(a!=b){
        if(a>b){a = a-b;}
        else b = b-a;
    }
    printf("GCD=%d",a);
}
void third(){
    int r,a,b;
    scanf("%d %d",&a,&b);
    for(;r=a%b;a=b,b=r);
    printf("GCD=%d",b);
}
int main(){
    //first();
    //second();
    third();
    return EXIT_SUCCESS;
}