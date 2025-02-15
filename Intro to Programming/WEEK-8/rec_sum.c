#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int sum(int n){
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
    
}

int sum2(int n){
    return n>1?n + sum2(n-1):1;
}

int sum3(int n){
    return n>1?n*n+sum3(n-1):1;
}

int sum4(int n){
    return n>1?n*(n+1):2;
}
int sum5(int n){
    return n>3?(n*n*n-5)+sum5(n-1):22;
}
int fib(int n){
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);

    
}
int main(){
    int n;
    printf("n=");scanf("%d",&n);
    // printf("SUM=%d\nSUM2=%d\n",sum(n),sum2(n));
    //printf("SUM=%d",sum3(n));
    // printf("SUM=%d",sum4(n));
    // printf("SUM=%d",sum5(n));
    printf("FIB=%d",fib(n));
    return EXIT_SUCCESS;
}