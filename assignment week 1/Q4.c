#include<stdio.h>
int main()
{ 
    float a,b,c,d,e,f;
    printf("enter physics mark:\n chemistry mark:\n biology marks:\n maths marks:\n comp marks:\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
     printf("percentage is:%f \n",f);
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






    

