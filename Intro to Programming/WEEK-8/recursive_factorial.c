#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int rec_fact(int n){
    if(n==1||n==0)
    return 1;
    else
    return n*rec_fact(n-1);
    
}
int fact(int n){
    if(n==0)
    return 1;
    else
    return n>1?n*rec_fact(n-1):1;
}
int main(){
    int n;
    printf("n=");scanf("%d",&n);
    printf("FACTORIAL=%d\n%d",rec_fact(n),fact(n));
    return EXIT_SUCCESS;
}