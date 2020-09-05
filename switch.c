#include<stdio.h>
#include<math.h>
main()
{
	int a,p,i=0,dec=0,x=0,oct[100];
    printf("enter number in binary digits(0/1)");
			scanf("%d",&a);
			while(a!=0)
			{
				dec=dec+(a%10)*pow(2,x);
				x=x+1;
				a=a/10;
			}
            if(dec<8)
			printf("%d",dec);
			else
			{
			while(dec>=8)
			{
				oct[i]=dec%8;
				i=i+1;
				dec=dec/8;
			}
			p=i;
			printf("octal digits=%d",dec);
			for(i=p-1;i>=0;i--)
			{
				printf("%d",oct[i]);
			}
			printf("\n");
		} }
