#include<stdio.h>
#include<string.h>
int main()
{
int i=0,j,n,choice,l=0,y=1;
char string[50],string1[50],*pt,*ptr;
printf("Enter a String = ");
scanf("%s",&string);
pt=string;
repeat: ;
printf("\nEnter Choice \n1.Length\n2.Copy\n3.Reversing \n4.Palindrome\n5.Concatenation\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
    while(*pt !='\0')
    {
        i++;
        pt++;
    }
    printf("Length of string is %d",i);
    break;
case 2:
    printf("Enter another string= ");
    pt=&string;
    scanf("%s",&string1);
    for(i=0;i<strlen(string1);i++)
        *(pt+i)=string1[i];
        *(pt+i)='\0';
    for(i=0;i<strlen(string1);i++)
        printf("%c",*(pt+i));
    break;
case 3:
    for(i=strlen(string)-1;i>=0;--i)
        printf("%c",*(pt+i));
    break;
case 4:
    ptr=&string;
    i=0;
    while(string[i]!=0)
    {
        ptr++;
        i++;
    }
    ptr--;
    for(pt=&string[0];pt<=ptr;pt++)
    {
    if(*(pt)==*(ptr))
    --ptr;
    else
    break;
    }
    if(pt>ptr)
        printf("%s is palindrome\n",string);
    else
        printf("%s is not palindrome\n",string);
    break;
case 5:
    printf("Enter another string= ");
    scanf("%s",&string1);
    i=strlen(string);
    for(j=0;j<strlen(string1);j++)
    {
        *(pt+i)=string1[j];
        i++;
    }
    *(pt+i)='\0';
    printf("Concatenated String = ");
    for(j=0;j<strlen(string1)+strlen(string);j++)
        printf("%c",*(pt+j));
    break;
default:
    printf("Invalid choice");
}
goto repeat;

}
