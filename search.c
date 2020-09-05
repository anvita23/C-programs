#include<stdio.h>
int main(){
int a[20],i,n,s,choice,k=0,lb=0,ub=0,mid,y=1,count=0;
printf("Enter your choice:\n1.Linear Search\n2.Binary search\n3.Linear search with multiple occurences\n");
scanf("%d",&choice);
switch(choice){
case 1:
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element to search\n");
    scanf("%d",&s);
    for(i=0;i<n;i++){
    if(a[i]==s)
    {
         printf("%d is present at location %d\n",s,i+1);
         break;
    }
    }
    if(i==n)
        printf("%d is not present in the array.\n",s);
    printf("\nEnter 1 to continue and 0 to exit");
		scanf("%d",&y);
		if(y!=1)
		break;

case 2:
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter numbers in ascending order\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter number to search\n");
    scanf("%d",&s);
    while(lb<=ub)
    {
        ub=n-1;
        mid=(lb+ub)/2;
        if(a[mid]==s)
        {
            printf("%d is present at location %d\n",s,mid+1);
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
        printf("\nEnter 1 to continue and 0 to exit");
		scanf("%d",&y);
		if(y!=1)
            break;
case 3:
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
    printf("\nEnter 1 to continue and 0 to exit");
    scanf("%d",&y);
    if(y!=1)
    break;

}
}

