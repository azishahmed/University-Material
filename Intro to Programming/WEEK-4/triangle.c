
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a,b,c;
    float s;
    float Area;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("The triangle can be constructed!\n");
        s =(a+b+c)/2.0;
        printf("s = %f\n",s);
        Area = pow(s*(s-a)*(s-b)*(s-c),0.5);
        printf("Area = %.2lf",Area);
    }
    else
    printf("Triangle cannot be constructed!");
    return 0;
}

/*
#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c;
float p, A;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
printf("c="); scanf("%d",&c);
if (a<b+c && b<a+c && c<a+b)
{
printf("The triangle can be contructed!\n");
p=(a+b+c)/2.0; //half perimeter
print("s = p");
A= sqrt(p*(p-a)*(p-b)*(p-c)); //triangle area
printf("The area of the triangle is %.2f.", A);
}
else
printf("The triangle cannot be contructed!\n");
return 0;
}
*/