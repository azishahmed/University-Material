#include<stdio.h>
#include<stdlib.h>
int add(int x, int y)
{
int z;
z=x+y;
return z; //return x+y;
}
double average(int x, int y, int z)
{
double avg;
avg=(x+y+z)/3.0;
return avg;
}
double main(){
    int x,y,z;
    int sum = add(3,4);
    double avg=average(3,4,6);
    printf("SUM=%d\nAVERAGE=%.2lf",sum,avg);
    return 0;

}



