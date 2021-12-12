#include <stdio.h>
#include <stdlib.h>

int TOH(int n, int A, int B, int C)
{

    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf(" Move %d to %d \n",A,C);
        TOH(n-1,B,A,C);
    }

}

int main()
{
    int n,r;
    printf("How many discs are there? ");
    scanf("%d",&n);
    TOH(n,1,2,3);

}
