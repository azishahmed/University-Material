#include<stdio.h>
#include<stdlib.h>
void first(){
int n, i=1, sum=0;
printf("\n\t------!!!ENTER number to calculate SUM!!!------\nn=");
scanf("%d",&n);
while(i<=n){
printf("%d\n",i);
sum+=i;
i++;
/*sum+=i++;*/
}
printf("SUM=%d\n",sum);
}
void second(){
    int n, i = 1, prod=1;
    printf("\n\t------!!!ENTER number to calculate PRODUCT!!!------\nn=");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        prod*=i;
        i++;
    }
printf("PROD=%d\n",prod);
}
void third(){
    int i;
scanf("%d", &i);
while (i < 5) {
    printf("Hello World!\n");
    i += 1; 
    }
}
void fourth(){
    int i, n ;
    printf("n=");
    scanf("%d",&n);
    while(n!=0){
        printf("%d\n",n*n);

        printf("n=");
        scanf("%d",&n);
    }
}
int main(){
    fourth();
    return 0;
}