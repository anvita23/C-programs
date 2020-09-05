#include<stdio.h>
#include<string.h>
main()
{
	int i,j,n,choice,l=0,p=0;
	char string[50],string1[50];
	repeat :;
	printf("Enter your choice\n\n1. Length\n2. Copy\n3. Reversing \n4. Palindrome\n5. Concatenation\n ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter String = ");
			scanf("%s",&string);
			for(i=0;string[i]!='\0';i++)
			l++;
			printf("Length of string is %d",l);
			break;
		case 2:
			printf("Enter String = ");
			scanf("%s",&string);
			printf("Enter another string= ");
			scanf("%s",&string1);
			for(i=0;i<strlen(string)+strlen(string1);i++)
			string[i]=string1[i];
			printf("New string is %s",string);
			break;
		case 3:
			printf("Enter String = ");
			scanf("%s",&string);
			for(i=strlen(string)-1;i>=0;i--)
			printf("%c",string[i]);
			break;
		default:
			printf("Wrong choice");
	}
	goto repeat;
}
