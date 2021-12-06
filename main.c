#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else return fib(n-2)+fib(n-1);
}
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int r=fib(x);
    printf("%d",r);
    return 0;
}
