#include<iostream>
using namespace std;
class flag
{
private:
int x, y;
public:
flag(int x1, int y1) { x = x1; y = y1; }
flag(const flag &b) {x = b.x; y = b.y; }
int getX(){
return x;
}
int getY(){
return y;
}
};
int main()
{
flag a(500, 1100);
flag b = a;
cout << "a.x = " << a.getX() << ", a.y = " << a.getY();
cout << "\nb.x = " << b.getX() << ", b.y = " << b.getY();
return 0;
}

