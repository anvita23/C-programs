#include<stdio.h>
int main(){
int i,n,s,k=0,lb=0,ub=0,mid,a[20];
printf("Enter size\n");
scanf("%d",&n);
printf("Enter elements in ascending order\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter search element\n");
scanf("%d",&s);
while(lb<=ub)
{
    ub=n-1;
    mid=(lb+ub)/2;
    if(a[mid]==s)
    {
        printf("%d is prsent at location %d\n",s,mid+1);
        k++;
        break;
    }
    if(a[mid]>s)
    {
        ub=mid-1;
    }
    if(a[mid]<s)
    {
        lb=mid+1;
    }
}
    if(k==0)
    {
        printf("%d is not present in array\n",s);
    }
}

