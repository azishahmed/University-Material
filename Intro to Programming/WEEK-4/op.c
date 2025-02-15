#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    char op;
    printf("Input two integers and operand between them e.g 3 + 7:\n");
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':printf("%d + %d = %d", a,b,a+b);break;
    case '-':printf("%d - %d = %d", a,b,a-b);break;
    case '*':printf("%d x %d = %d", a,b,a*b);break;
    case '/':if (b==0){printf("Infinite!\nUndefined!\nDivision by zero!\n");break;}
             else printf("%d / %d = %.2f", a,b,a/(float)b);break;
    default:printf("Error!");
        break;
    }

}