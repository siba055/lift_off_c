#include <stdio.h>
int factor(int a)
{
      int  b = 1;

    for (int i = 1; i < a+1; i++)
    {
        b = b * i;
    }
    return b;
}
int main()
{
    int c;
    printf("Enter a Number: ");
    scanf("%d", &c);
    printf("%d",factor(c));
}