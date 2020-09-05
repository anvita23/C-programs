#include<stdio.h>
int done(int n);
int main(){
    int a,f;
    printf ("Enter a number to find factorial");
    scanf("%d",&a);
    f=done(a);
    printf("%d",f);
}
int done(int n)
{
    int fact=1,i;
   for(i=1;i<=n;i++)
        fact=fact*i;
   return fact;
}
