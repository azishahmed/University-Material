#include<stdio.h>
#include<stdlib.h>
void first(){
    int a, b, prod=1, sum=0;
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    while(a){
        sum+=(a%10);
        a/=10;
    }
    while (b)
    {
        prod*=(b%10);
        b/=10;
    }
printf("SUM=%d\nPROD=%d\n",sum,prod);


}
int main(){
    first();
    return 0;
}