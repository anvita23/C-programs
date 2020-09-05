#include<stdio.h>
int main(){
int i,k,j,m,p,q,n,a[10][10],b[10][10],c[10][10],sum=0;
printf("Enter rows and columns\n");
scanf("%d%d",&m,&n);
printf("Enter rows and columns\n");
scanf("%d%d",&p,&q);
printf("Enter elements\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
}
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
}
if(n==p)
for(i=0;i<m;i++)
{
    for(j=0;j<q;j++)
       {
           for(k=0;k<p;k++)
            sum=sum+a[i][k]*b[k][j];
           c[i][j]=sum;
           sum=0;
       }
}
for(i=0;i<m;i++)
{
    for(j=0;j<p;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
}
return 0;
}
