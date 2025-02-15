#include<stdio.h>
#include<stdlib.h>
// void first(){
//     int n, count = 0;
//     printf("");
//     scanf("%d",&n);
//     while(n){
//         if(n%3==0){
//             count++;
//             printf("Divisible by 3!\n");
//         }
//         else{
//             printf("Not Divisible!\n");
//         }
//         printf("");
//         scanf("%d",&n);
//     }
// if(count==1){
// printf("%d number is div by 3",count);
// }
// else
// printf("%d numbers are div by 3",count);
// }
// int main(){
//     first();
//     return 0;
// }
int main(){
int n, count=0;
scanf("%d",&n);
while (n!=0)
{
if (n%3==0)
count++;
scanf("%d",&n);
}
printf("%d numbers were input which were divided by 3!\n",count);
return EXIT_SUCCESS;
}