#include<stdio.h>
#include<stdlib.h>
void first(){
    int i;
    for (i = 0; i < 5; i += 2)
    printf("Hello World!\n"); 
    //printf("%d",i);
}
void second(){
    int i, k=0, j=0;
    for (i=1; i<=4; i++)
    j=k++;
    printf("%d %d %d\n",i,j,k);
}
void third(){
    int i;
    for (i=1; i<=20; i++)
    printf("%d\n",i);
}
void fourth(){
    int i;
    for (i=100; i>0; i--)
    printf("%d\n",i);

}
void fifth(){
    int i;
    for(i=0;i<1000;i+=5)
    printf("%d\n",i);
}
void sixth(){
    int i, n ;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d %d\n",i,i*i);
}
void seventh(){
    int i, n ;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    printf("%d %d\n",i,i*i);
}
void eighth(){
    int i, n ;
    printf("n=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d %d\n",i,i*i);
}
void nineth(){
    int i, n ;
    printf("n=");
    scanf("%d",&n);
    for(i=n;i>=1;i-=5)
    printf("%d %d\n",i,i*i);
}
void tenth(){
    int i;
    for (i=1; i<=10; i++)
    printf("%d\n",i);
}
void eleventh(){
int i;
i = 1;
for( ;i<=10; i++)
printf("%d\n", i);
}
void twelveth(){
int i;
i = 1;
for ( ; ; i++){
    printf("%d\n", i);
    if (i == 10) break;
} 
}
void thirtheenth(){
int i;
i = 1;
for (;;){
    printf("%d\n", i);
    if (i == 10) break;
    i += 1;
} 
}
void fourteenth(){
    int i;
    for (i=10; i>0; i--)
    printf("%d ",i);
}
void fiveteenth(){
   int i;
    for (i=10; i>0; i=i-2)
    printf("%d ",i);
}
void sixteenth(){
    int i;
    for (i=10; i>0; i--);
    printf("%d ",i);
}
void seventeenth(){
    int i;
for (i=1; i!=10; i++)
printf ("%d\n",i);
}
void eighteenth(){
int i=5;
for ( ; i=!10; i++)
printf("%d\n",i);
}
void ninteenth(){
    int a;
for (scanf("%d", &a); a != 0; scanf("%d", &a))
printf("%d %d\n", a, a*a);
}
int main(){
    ninteenth();
    return EXIT_SUCCESS;
}