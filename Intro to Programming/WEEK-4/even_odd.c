#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Enter a number!\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("EVEN!");
    else
    printf("ODD!");
    return EXIT_SUCCESS;

} 

/*
#include <stdio.h>
int main()
{
int a;
printf("a=");
scanf("%d", &a);
if (a % 2 == 0)
printf("%d is even\n", a);
else
printf("%d is odd\n", a);
return 0;
}
*/