#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
    int a;
    for(scanf("%d",&a);a%2!=0;scanf("%d",&a));
    
}
void second(){
    int a;
    scanf("%d",&a);
    while(a%2!=0){
        scanf("%d",&a);
    }
}
int main(){
    //first();
    second();
    return EXIT_SUCCESS;
}