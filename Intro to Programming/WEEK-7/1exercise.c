#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
    int n,i;
    printf("n=");
    scanf("%d",&n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    first();
    return EXIT_SUCCESS;
}