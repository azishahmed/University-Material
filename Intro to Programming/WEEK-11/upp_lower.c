#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(){
    int i;
    char s[50];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(isupper(s[i]))
        s[i]=tolower(s[i]);
        else if(islower(s[i]))
        s[i]=toupper(s[i]);
    }
printf("%s\n",s);
    return EXIT_SUCCESS;
}