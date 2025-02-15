#include<stdio.h>
#include<stdlib.h>
void first(){
    int n;
    printf("");
    scanf("%d",&n);
    while (n!=0)
    {
        if(n%2==0)
            printf("EVEN!\n");
        else{
        printf("ODD!\n");}
    printf("");
    scanf("%d",&n);
    }
}
int main(){
    first();
    return 0;
}