#include <stdio.h>
void sum(int num)
{
    int arr[num],n,sum=0,i;
    printf("Enter any  numbers");

    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];}

printf("sum= %d",sum);
}
int main(i){
    int n;
    printf("Enter the size of array ");
        scanf("%d",&n);
        sum(n);
        return 0;
}
