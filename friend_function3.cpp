#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
  int a;
  int b;

public:
  void setData(int x, int y)
  {
    a = x;
    b = y;
  }
  void showData()
  {
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
  }
  friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex X, Complex Y)
{
  Complex temp;
  temp.a = X.a + Y.b;
  temp.b = X.a + Y.b;
  return (temp);
}

int main()
{
  Complex c1, c2, c3;
  c1.setData(3, 4);
  c2.setData(5, 6);
  c3 = c1 + c2;
  // c3=c1.operator+(c2) it is for only classs
  // but friend function it is read as c3=operator+(c2,c1);
  // unary ho ya binary friend function banana ho to ak argument jada paass karan thaaaa

  c3.showData();
}