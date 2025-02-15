#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
int i,c=0;
char s[50];
scanf("%s",s);
int len = strlen(s);
for(i=0;i<len;i++)
    if(s[i]==s[len-i-1])
    c++;
    if (c==len){
    printf("PALINDROME!\n");}
    else
    printf("NOT PALINDROME!\n");
    return EXIT_SUCCESS;
}