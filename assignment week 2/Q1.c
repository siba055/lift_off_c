#include<stdio.h>
int main(){
    int x,j,sum;
    printf("enter no of digits in number=\n");
    scanf("%d",&x);
    int num[x];
    for(int i=0;i<x;i++)
    {
        printf("enter\n  %d st digit:\n",i);
        scanf("%d",&j);
        num[i]=j;
    }
    for(int i=0;i<x;i++)
    {
        sum=sum+num[i];
    }
    printf("sum of didgits =%d",sum);

}