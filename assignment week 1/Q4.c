#include<stdio.h>
int main()
{ 
    int a,b,c,d,e,f,total,scored;
    printf("enter physics mark:\n chemistry mark:\n biology marks:\n maths marks:\n comp marks:\n total marks:\n");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&total);
    scored=(a+b+c+d+e);
    f=(scored/total)*100;
     printf("percentage is:%d \n",f);
    if(f>=90)
    printf("grade a");
    else if(f>=80)
    printf("grade b");
    else if(f>=70)
    printf("grade c");
    else if(f>=60)
    printf("grade d");
    else if(f>=40)
    printf("grade e");
    else printf("fail");

   

}






    

