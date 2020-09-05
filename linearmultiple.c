#include<stdio.h>
int main(){
int a[20],i,n,s,count=0;
printf("Enter the no of elements");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter a number to search\n");
scanf("%d",&s);
for(i=0;i<n;i++){
if(a[i]==s)
{
     printf("%d is present at location %d\n",s,i+1);
     count++;
}
}
if(count==0)
        printf("%d is not present in the array.\n",s);

else
      printf("%d is present %d times in the array\n",s,count);

return 0;
}
