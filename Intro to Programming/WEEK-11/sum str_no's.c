#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
int n, count = 0, i, sum = 0;
char s[20];
scanf("%s", s);
for (i = 0; i < strlen(s); i++)
if (s[i] == '5')
count++;
printf("Number of 5s=%d\n", count);
n = atoi(s);
while (n) {
sum += n % 10;
n /= 10;
}
printf("Sum of the digits=%d\n", sum);
    return EXIT_SUCCESS;
}