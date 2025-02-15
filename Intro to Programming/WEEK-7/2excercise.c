#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<time.h>
void first(){
    int i,n,a,b,c,sum=0,even=0,min=0,max=0;
    printf("n=");scanf("%d",&n);
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    if(a>b){c=a;a=b;b=c;}
    printf("interval is [%d,%d]\n",a,b);
    int arr[n];
    srand(time(NULL));
    for(i=0;i<n;i++){
        arr[i]=(rand()%(b-a+1))+a;
        sum += arr[i];
        if(arr[i]%2==0){
            even++;
        }
        if(arr[i]<arr[min]){
            min=i;
        }
        if(arr[i]>arr[max]){
            max=i;
        }
    }
for(i=0;i<n;i++){printf("%d ",arr[i]);}
printf("\nSUM=%d\n",sum);
printf("EVENS=%d\n",even);
printf("MIN_INDEX=[%d]\n",min);
printf("MIN=%d\n",arr[min]);
printf("MAX_INDEX=[%d]\n",max);
printf("MAX=%d\n",arr[max]);


}
int main(){
    first();
    return EXIT_SUCCESS;
}