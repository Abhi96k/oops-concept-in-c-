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
    cout << "a=  " << a << endl;
    cout << "b=  " << b << endl;
  }
  Complex operator+(Complex c)
  {
    Complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;
  }
};
int main()
{
  Complex c1, c2, c3;

  c1.setdata(3, 4);
  c2.setdata(5, 6);
  // type ---01
  // c3 = c1.operator+(c2);
  // type----02
  c3 = c1 + c2;

  c3.showdata();
  return 0;
}

// When an operator is overloaded with multiple jobs, it is known as operator overloading
//  it is way to implement compile time polymorphism
