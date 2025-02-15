#include<stdio.h>
#include<stdlib.h>
int main(){
    int p;
    printf("Give me your Percentage!\n");
    scanf("%d",&p);
    if(p<0 || p>100){
        printf("Default value!");
    }
    else if (p<=20)
    {
        printf(" Failed!");
    }
    else if (p<=40)
    {
        printf("Grade is 2!");
    }
    else if (p<=60)
    {
        printf("Grade is 3!");
    }
    else if (p<=80)
    {
        printf("Grade is 4!");
    }
    else if (p<=100)
    {
        printf("Grade is 5!");
    }
    
    
    return EXIT_SUCCESS;
}