#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
    char s[20], c;
int i, j;
scanf("%s",s);
for( i=0, j=strlen(s) - 1; i<j; i++, j--)
{
c=s[i];
s[i]=s[j];
s[j]=c;
}
printf("%s",s);
    return EXIT_SUCCESS;
}