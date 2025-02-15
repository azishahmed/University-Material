#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
int a, b;
a=0x48;
b=035;
a= a | b;
printf("b=%d, a=%X\n", b, a);
}
void second(){
int a, b, c;
a= 0xEB; b =0xAC; c=0xEB;
c &= b<<3;
b ^= a>>1;
printf("c=%o b=%X\n", c, b);
}
void third(){
    int n=11;
printf("Result= %d\n", !!(n & (1 << 3)));
}
void fourth(){
    int i=-5, j=0, k=10;
if (k || i && j)
{ i++;
j+=k; }
else
k=k*(i+j);
printf("i=%d\tj=%d\tk=%d\n",i,j,k);
}
void fifth(){
    int a, b, c;
a = b = c = 9;
b = ++b + (a/5);
c = c < a ? a+2 : b%5;
b+=a; a%=2; --c;
printf("a=%d\tb=%d\tc=%d",a,b,c);
}
void sixth(){
    double a=15.123, b=-42.23123, c;
c=a;
a=b;
b=c;
printf("a= %.3lf\nb=%.2lf\n", a, b);
}
void seventh(){
    double a=5.12, b=42.23;
a-=b;
b+=a;
a=b-a;
printf("a= %.4lf\nb=%.2lf\n",a,b);
}
void eighth(){
    int i, j, k;
i=-2; j=-3; k=0;
if (i==j || k)
k=-1 * (++i || j);
else
k=-2 * (i && k);
printf("%d\n%d\n%d\n", i, j, k);
}
void nineth(){
int a, sum=0;
for (a=1; a<10; a++){
if(!(a%2)){
printf("%d ", a);
sum=sum+a;
}
}
printf("\nSum = %d\n",sum);
}
void tenth(){
    int x, k = 0;
scanf("%d", &x);
while(x!=0)
{
scanf("%d", &x);
k++;
}
printf("%d", k);
}
void eleventh(){
    int x, k = 0;
    
    scanf("%d",&x);
    do
    {
        scanf("%d",&x);
        k++;
    } while (x!=0);
printf("%d",k);
    
}


int main(){
    //first();
    //second();
    //third();
    //fourth();
    //fifth();
    //sixth();
    //seventh();
    //nineth();
    //tenth();
    eleventh(); 
    return EXIT_SUCCESS;
}