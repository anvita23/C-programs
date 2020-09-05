#include <stdio.h>
int euclid(int x, int y)
{
    if (x == 0)
        return y;
    return euclid(y%x,x);
}
int swap(int x,int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
int main()
{
    int m=1;
    while(m==1)
    {
    int x,y;
    printf("\nEnter the value of x and y: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
    	swap(x,y);
	}
    printf("GCD(%d, %d) = %d", x, y, euclid(x, y));
    printf("\nWould u like to continue?\nPress 1 for Yes\nPress 2 for No");
    scanf("%d",&m);
}
    return 0;
}

