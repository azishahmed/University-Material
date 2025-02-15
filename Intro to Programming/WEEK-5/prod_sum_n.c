#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i,sum = 0, prod = 1;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        sum += i;
        prod *= i;}
    printf("Sum=%d\nProduct=%d",sum, prod);
    return EXIT_SUCCESS;
}