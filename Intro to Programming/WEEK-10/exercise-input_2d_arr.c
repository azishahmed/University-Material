#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, row, column;
printf("row: "); scanf("%d",&row);
printf("column: "); scanf("%d",&column);
int a[row][column];
printf("Give the matrix elements!\n");
for(i=0; i<row; i++)
for(j=0; j<column; j++)
{
printf("a[%d][%d]=", i, j);
scanf("%d",&a[i][j]);
}
for(i=0; i<row; i++) {
for(j=0; j<column; j++)
printf("%d\t",a[i][j]);
printf("\n"); }
    return EXIT_SUCCESS;
}