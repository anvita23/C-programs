#include<stdio.h>
int main(){
int arr[20],i,n,s;
printf("Enter the no of elements");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter an element to search\n");
scanf("%d",&s);
for(i=0;i<n;i++){
if(arr[i]==s)
{
     printf("%d is present at location %d\n",s,i+1);
     break;
}
}
if(i==n)
    printf("%d is not present in the array.\n",s);
return 0;
}

