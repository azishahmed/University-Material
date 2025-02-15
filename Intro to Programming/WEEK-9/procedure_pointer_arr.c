#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void print_out(int a[], int n)
{
int i;
for (i=0; i<n; i++)
printf("%d ", a[i]);
printf("\n");
}
float average(int a[], int n)
{
int i;
float sum=0;
for (i=0; i<n; i++)
sum+=a[i]; //sum+=*(a+i);
return sum/n;
}

int max_value(int *a,int n){
    int i, max = a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int min_value(int *a,int n){
    int i, min = a[0];
    for(i=0;i<n;i++){
        if(a[i]<min)
        min=a[i];
    }
    return min;
}

int max_index(int *a,int n){
    int i, max = 0;
    for(i=0;i<n;i++){
        if(a[i]>a[max])
        max = i;
    }
    return max;
}
int min_index(int *a,int n){
    int i, min = 0;
    for(i=0;i<n;i++){
        if(a[i]<a[min])
        min = i;
    }
    return min;
}


int even_count(int *a,int n){
    int i, count=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0)
        count++;
    }
return count;
}
int main(){
    int i,n;
    printf("n=");
    scanf("%d",&n);
    int a[n];
for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    } 
    print_out(a,n);
    printf("AVERAGE: %.2f\n",average(a,n));
    printf("MAX VALUE: %d\n",max_value(a,n));
    printf("MIN VALUE: %d\n",min_value(a,n));
    printf("MAX INDEX: [%d]\n",max_index(a,n));
    printf("MIN INDEX: [%d]\n",min_index(a,n));
    printf("No. OF EVENS: %d\n",even_count(a,n));
    return EXIT_SUCCESS;
}