#include<stdio.h>
#include<stdlib.h>
void first(){
int i=18;
while (!i)
i--;
printf("%d\n",i);
}
void second(){
    int i=7;
while (i==8)
i++;
printf("%d\n",i);
}
void third(){
  int i=7;
while (i=8)
i++;
printf("%d\n",i);
}
int main(){
    first();
    second();
    third();
    return 0;
}