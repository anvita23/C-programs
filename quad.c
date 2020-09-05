#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d;
int r1,r2;
printf("Enter the values of a,b,c\n");
scanf("%f %f %f,&a,&b,&c");
d=b*b-4*a*c;
if(d>=0)
{
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    printf("The roots are %d and %d\n",r1,r2);
}
else
    printf("roots doesnt exist");

return 0;

}
