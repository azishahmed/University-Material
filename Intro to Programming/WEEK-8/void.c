#include<stdio.h>
int add(int x, int y)
{
return x+y;
}


void display(int x, int y, int z){
printf("Sum of %d and %d is %d", x, y, z);
}


int main()
{
int a,b,c;
printf("Enter two numbers:\n");
scanf("%d %d",&a,&b);
c=add(a,b);
display(a,b,c);
return 0;
}