#include<stdio.h>
int main(){
   char str[100],str1[30],str2[30];
   int i,j,l=0,l1=0;
   scanf("%s",&str1);
   for(i=0;str1[i]!='\0';i++)
    l++;
   printf("%d\n",l);
   scanf("%s",&str2);
    for(i=0;str2[i]!='\0';i++)
    l1++;
   for(i=l,j=0;i<l+l1,j<l1;i++,j++)

       {
           str1[i]=str2[j];
   }
          str1[i]='\0';


   printf("%s",str1);
   return (0);
}
