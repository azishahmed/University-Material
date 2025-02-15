#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<math.h>
int factorial(int n){
    int i,f=1;
    for(i=1;i<=n;i++)
        f*=i;
        return f;
}

int sum(int n){
    int i ,sum=0;
    for(i=0;i<=n;i++)
    sum += i;
    return sum;

}


int power(int x,int n){
    // int p;
    // p = pow(x,n);
    int i,p=1;
    for(i=1;i<=n;i++)
    p *= x;
    return p;

}


int main(){
    int n;
    int x;
    printf("x=");scanf("%d",&x);
    printf("n=");scanf("%d",&n);
    int f = factorial(n);
    int s = sum(n);
    int p = power(x,n);
    printf("FACTORIAL OF %d is : %d\n",n,f);
    printf("SUM OF %d NUMBERS : %d\n",n,s);
    printf("%d POWER OF %d NUMBER IS : %d\n",n,x,p);
    return EXIT_SUCCESS;
}