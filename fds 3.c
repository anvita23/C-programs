#include<stdio.h>
int main()
{
int choice,a[20][20],b[20][10],c[20][20],sum=0,i,j,k,max=0,sym=0,n,m,p,q,x,r=1;
printf("Enter your choice\n1.Addition of matices\n2.Subtraction of matrices\n3.Transpose of a matrix\n4.Multiplication of matrices\n5.Find greatest no. from each row\n6.Addition of major diagonal elements\n7.Addition of minor diagonal elements\n8.Lower triangular matrix\n9.Upper triangular matrix \n10.Find whether a matrix is symmetric or not\n");
scanf("%d",&choice);
switch(choice)
	{
		case 1:
			printf("Enter no. of rows and columns in array\n");
			scanf("%d %d",&m,&n);
			printf("Enter elements of first array\n");
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
                    scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("Enter elements of second array\n");
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					scanf("%d",&b[i][j]);
				}
				printf("\n");
			}
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
					printf("%d\t",c[i][j]);

				}
				printf("\n");

			}
			printf("Enter 1 to continue and 0 to exit\n");
			scanf("%d",&r);
			if(r!=1)
			break;
		case 2:

			printf("Enter no. of rows and columns in array\n");
			scanf("%d %d",&m,&n);
			printf("Enter elements of first array\n");
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("Enter elements of second array\n");
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					scanf("%d",&b[i][j]);
				}
				printf("\n");
			}
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					c[i][j]=a[i][j]-b[i][j];
					printf("%d\t",c[i][j]);

				}
				printf("\n");
		    }
			printf("Enter 1 to continue and 0 to exit\n");
			scanf("%d",&r);
			if(r!=1)
			break;
		case 3:
			printf("Enter no.of rows and columns in array\n");
			scanf("%d %d",&m,&n);
			printf("Enter elements of array\n");
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=n;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
	     	printf("Array after transpose:\n");
	     	for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
				{
					printf("%d\t",a[j][i]);

				}
				printf("\n");
		    }
		    printf("Enter 1 to continue and 0 to exit\n");
			scanf("%d",&r);
			if(r!=1)
			break;
		case 4:
			printf("Enter no. of rows and columns in first array\n");
			scanf("%d %d",&m,&n);
			printf("Enter no. of rows and columns in second array\n");
			scanf("%d %d",&p,&q);
			if(n==p)
			{
			printf("Enter elements of first array\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
			printf("Enter elements of second array\n");
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					scanf("%d",&b[i][j]);
				}
	     	}
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
	     	printf("Array after multiplication: \n");
	     	for(i=0;i<m;i++)
	     	{
	     	for(j=0;j<p;j++)
	     	printf("%d\t",c[i][j]);
	     	printf("\n");
	     }
	}
		else
		printf("It cannot be multiplied\n");
        printf("Enter 1 to continue and 0 to exit\n");
		scanf("%d",&r);
		if(r!=1)
		break;

        case 5:
			printf("Enter no. of rows and columns in array\n");
			scanf("%d %d",&m,&n);
			printf("Enter elements of array\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
	     	for(i=0;i<m;i++)
	     	{
	     		for(j=0;j<n;j++)
	     		{
	     		if(a[i][j]>=max)
				 max=a[i][j];
	     		}
	     		printf("Maximum number: %d\n",max);
	     		max=0;
	     	}
	     	printf("Enter 1 to continue and 0 to exit\n");
			scanf("%d",&r);
			if(r!=1)
			break;
	case 6:
			printf("Enter no. of rows and columns in array\n");
			scanf("%d",&m);
			printf("Enter elements of array\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
				if(i==j)
				sum=sum+a[i][j];
	     	}}
	     	printf("Sum of major diagonal elements =%d\n",sum);
	   	    printf("Enter 1 to continue and 0 to exit\n");
		    scanf("%d",&r);
	    	if(r!=1)
            break;
        case 7:
			printf("Enter no. of rows and columns in array\n");
			scanf("%d",&m);
			printf("Enter elements of array\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
	     	for(i=0,j=m-1;i<m,j>=0;i++,j--)
	     	sum=sum+a[i][j];
	     	printf("Sum of minor diagonal elements =%d\n",sum);
            printf("Enter 1 to continue and 0 to exit\n");
            scanf("%d",&r);
            if(r!=1)
            break;
        case 8:
			printf("Enter no. of rows and columns in array\n");
			scanf("%d",&m);
			printf("Enter elements of array\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					if(i>j)
					printf("%d\t",a[i][j]);
					else
					printf("0\t");
			}
			printf("\n");
		}
		printf("Enter 1 to continue and 0 to exit\n");
		scanf("%d",&r);
		if(r!=1)
		break;
	case 9:
			printf("Enter no. of rows and columns in array\n");
			scanf("%d",&m);
			printf("Enter elements of array\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					if(i<j)
					printf("%d\t",a[i][j]);
					else
					printf("0\t");
			}
			printf("\n");
		}
		printf("Enter 1 to continue and 0 to exit\n");
		scanf("%d",&r);
		if(r!=1)
		break;
	case 10:
			printf("Enter no. of rows and columns in array\n");
			scanf("%d",&m);
			printf("Enter elements of array\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					scanf("%d",&a[i][j]);
				}
	     	}
			for(i=0;i<m;i++)
			{
				for(j=0;j<m;j++)
				{
					if(a[i][j]==a[j][i])
					sym++;
					else
					break;
			}}
			if(sym==i*j)
			printf("Matrix is symmetric\n");
			else
			printf("Matrix is not symmetric\n");
			break;
	default:
            printf("Invalid choice.n");
return 0;
}
}

