#include<stdio.h>
int main()
{
    int i,j;
    for(i=9;i>=1;i--)
    {
        for(j=9;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
