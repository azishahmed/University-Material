#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
    int a,b,r;
    scanf("%d %d",&a,&b);
    while((r=a%b)!=0){
        a = b;
        b = r;
    }
    if(b==1){printf("RELATIVE PRIME!\n");}
    else printf("NO!\n");
    
    
}
int main(){
    first();
    return EXIT_SUCCESS;
}
