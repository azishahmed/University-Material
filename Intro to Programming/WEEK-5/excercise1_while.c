#include<stdio.h>
#include<stdlib.h>
void first(){
    int i,n ,count=0,sum=0;
    printf("");
    scanf("%d",&n);
    while(n!=0){
        count++;
        sum +=n;
        printf("");
        scanf("%d",&n);
        }
printf("AVERAGE=%.2f",sum/(float)count);

}
int main(){
    first();
    return 0;
}