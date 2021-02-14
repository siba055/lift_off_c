#include<stdio.h>
int main(){
    int x,j,sum,dig;
    printf("enter no of digits in number=\n");
    scanf("%d",&x);
    int num[x];
    for(int i=0;i<x;i++)
    {
       printf("enter\n  %d st digit:\n", i);
        scanf("%d",&dig); 
        num[i]=dig;
    }
   for(j=0;j<x;j++)
   {
       if(num[j]%2==0)
       sum=sum+num[j];
       else if(j%2==0)
       sum=sum+num[j];

   }
   printf("sum of even num and even position num=%d",sum);
}