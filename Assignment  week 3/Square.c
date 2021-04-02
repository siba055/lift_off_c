#include <stdio.h>
int square(int a)
{
    return (a * a);
}
int main()
{
    int i;
    printf("Enter a Number :");
    scanf("%d", &i);
    printf("Square of the given number is : %d", square(i));
}
