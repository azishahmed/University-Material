// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int stars;
//     printf("Give me a number(1-5)!\n");
//     scanf("%d",&stars);
//     switch (stars)
//     {
//     case 1:printf("*");
//         break;
//     case 2:printf("**");
//         break;
//     case 3:printf("***");
//         break;
//     case 4:printf("****");
//         break;
//     case 5:printf("*****");
//         break;
//     default:printf("Default Value!");
//         break;
//     }

    
//     return EXIT_SUCCESS;
// }

#include<stdio.h>
#include<stdlib.h>
int main(){
    int stars;
    printf("Give me a number(1-5)!\n");
    scanf("%d",&stars);
    switch (stars)
    {
    case 5:printf("*");
    case 4:printf("*");
    case 3:printf("*");
    case 2:printf("*");
    case 1:printf("*");
        break;
    default:printf("Default Value!");
        break;
    }

    
    return EXIT_SUCCESS;
}

