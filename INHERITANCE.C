#include<iostream>
using namespace std;
class A
{
   private:
    int a,b;
   public:
    A()
	{
		a=0;
		b=0;
    }
     A(int x, int y)
	{
        a = x;
        b = y;
    }
    void displayDistance()
	{
		cout<<"\n Values after overloading: ";
        cout<<"\n A is: "<<a<< " B is: "<<b<<endl;
    }
    A operator - ()
	{
        a = -a;
        b = -b;
        return A(a,b);
    }
    ~A()
    {
    	cout<<"\n Destructor called.";
	}
};
main()
{
   A A1(11, 10), A2(-5, 11);
   -A1;
   A1.displayDistance();
   -A2;
   A2.displayDistance();
}
