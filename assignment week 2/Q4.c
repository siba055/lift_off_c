#include<stdio.h>
int main(){
    int x,j,small,big;
    printf("enter no of digits in number=\n");
    scanf("%d",&x);
    int num[x];
    printf("enter the number=\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&num[i]); 
    }
    big=num[0];
    small=num[0];
   for(j=1;j<x;j++)
   {
      if(big<num[j])
      big=num[j];
      if(small>num[j])
      small=num[j];

   }
   printf("biigest=%d smallest=%d",big, small);
}