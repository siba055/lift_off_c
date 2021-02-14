#include<stdio.h>
#include<string.h>
void main(){
    int x,wrd=0;
    printf("enter no of characters including spACE=\n");
    scanf("%d", &x);
    char str[x];
    printf("enter a string=\n");
    scanf("%[^\n]", &str);
    for(int i=0;str[i]!='\0';i++)
    {
      if(str[i]==' '&& str[i]!=' ')
      wrd++;
    }
   printf("no of words in string=%d",++wrd);
}
