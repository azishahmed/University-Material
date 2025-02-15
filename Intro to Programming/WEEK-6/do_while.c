#include<stdio.h>
#include<stdlib.h>
void first(){
    int i;
scanf("%d", &i);
do {
printf("Hello World!\n");
i += 1;
} while(i < 5);

}
void second(){
    int i , k=0;
    while(i){
        scanf("%d",&i);
        k++;
    }
printf("%d",k-1);
}
void third(){
    int x, k = 0;
    do{
        scanf("%d",&x);
        k++;
    }while (x);
printf("%d",k-1);
    
}
int main(){
    second();
    return 0;
}