#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<math.h>
int prime(int n){
    if(n==0||n==1)
        return 0;
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
    
}
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    if(prime(n)!=0)
        printf("PRIME\n");
    else 
        printf("NOT PRIME\n");

    return EXIT_SUCCESS;
}