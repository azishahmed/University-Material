#include <stdio.h>
int main()
{
int n ,i;
printf("n=");
scanf("%d",&n);
for(i=0;;i++)
{
if (i==10)break;
printf("%d %d\n", i, i*i);
}
return 0;
}