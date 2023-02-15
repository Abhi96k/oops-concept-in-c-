#include <bits/stdc++.h>
using namespace std;
class Complex
{

private:
  int a;
  int b;

public:
  Complex(int x, int y) // paramethsized Constructor
  {
    a = x;
    b = y;
  }
  Complex(int k)
  {
    a = k;
  }
  Complex() // default Constructor
  {
  }
  Complex(Complex &c)
  {
    a = c.a;
    b = c.b;
  }
};
int main()
{
  Complex c1(3, 4), c2(5), c3;
  // Complex c1 = Complex(3, 4), c2 = 5, c3;
  Complex c4(c1);
  return 0;
}
