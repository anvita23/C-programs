#include<stdio.h>
int main(){
//pigeonholeprinciple
int n,m,a;
printf("Enter number of pigeons\n");
scanf("%d",&n);
printf("Enter number of holes\n");
scanf("%d",&m);
if(n>m)
{
    a=((n-1)/m)+1;
    printf("At least one hole contains %d pigeons\n",a);
}
else
{
    printf("%d holes are full\n",n);
}
}
