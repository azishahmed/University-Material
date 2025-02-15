#include<stdio.h>
#include<stdlib.h>
void first(){
    int n, min, max;
    printf("");
    scanf("%d",&n);
    min = n;
    max = n;
    while(n){
        if(n<min){min = n;}
        if(n>max){max=n;}
        printf("");
        scanf("%d",&n);
    }
printf("MIN=%d\nMAX=%d\n",min,max);

}
int main(){
    first();
    return 0;
}