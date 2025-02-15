#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
    int i;
    int digit=0,letter=0,others=0;
    char s[50];
    fgets(s,50,stdin);
    for(i=0;i<strlen(s)-1;i++){
        if(isdigit(s[i]))
        digit++;
        else if(isalpha(s[i]))
        letter++;
        else
        others++;

    }
printf("DIGITS: %d\nLETTERS: %d\nOTHERS: %d\n",digit,letter,others);
    return EXIT_SUCCESS;
}