#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<limits.h>
void first(){
    int n,max,min;
    if (scanf("%d",&n)==1){min=max=n;}
    while(scanf("%d",&n)!=EOF){
        if(n>max){max=n;}
        if(n<min){min=n;}
    }
printf("MAX=%d\nMIN=%d\n",max,min);
}
void second(){
    int n,min,max,first=1;
    while(scanf("%d",&n)!=EOF){
        if(first==1){
            max=min=n;
            first = 2;
        }
        if(n>max){max=n;}
        if(n<min){min=n;}
    }
printf("MAX=%d\nMIN=%d\n",max,min);   
}
void third(){
    int n,max,min;
    max=INT_MIN;
    min=INT_MAX;
    while(scanf("%d",&n)!=EOF){
        if(n>max){max=n;}
        if(n<min){min=n;}
    }
printf("MAX=%d\nMIN=%d\n",max,min); 
}
int main(){
    //first();
    //second();
    third();
    return EXIT_SUCCESS;
}
