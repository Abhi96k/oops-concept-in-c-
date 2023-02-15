// friend fuction is not member function of class to which it is friend
// Friend function is decleared in class with friend keywork
//  it must be defined the class to which it is friend

// it is no caller object
// it should not be define with membership label
#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
  int a;
  int b;

public:
  void setdata(int x, int y)
  {
    a = x;
    b = y;
  }
  void showdata()
  {
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
  }
  friend void fun(Complex);
};

void fun(Complex c)
{
  cout << " sum is =" << c.a + c.b << endl;
}
int main()
{

  Complex c1;
  c1.setdata(3, 5);
  fun(c1);
  return 0;
}
