#include<stdio.h>
#include<stdlib.h>
int main(){
    int p;
    printf("Give me your Points!\n");
    scanf("%d",&p);
    switch (p)
    {
    case 1:printf("Failed!");
        break;
    case 2:printf("Grade is 2!");
        break;
    case 3:printf("Grade is 3!");
        break;
    case 4:printf("Grade is 4!");
        break;
    case 5:printf("Grade is 5!");
        break;
    default:printf("Default Value!");
        break;
    }

    
    return EXIT_SUCCESS;
}

