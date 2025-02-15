#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void first(){
    int a;
    for(scanf("%d",&a);a;scanf("%d",&a));
}
void second(){
    int a;
    scanf("%d",&a);
    while(a){
        scanf("%d",&a);
    }
}
void third(){
    int n;
    while (scanf("%d", &n)!=EOF) {
    if (n % 3 == 0)
    continue;
printf("%d->%d\n", n, n * n);
}
}
int main(){
    //first();
    //second();
    third();
    return EXIT_SUCCESS;
}