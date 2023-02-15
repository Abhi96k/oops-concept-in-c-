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
  void showdata()
  {
    cout << "a=   " << a << endl;
    cout << "b=   " << b << endl;
  }
  Complex operator-()
  {
    Complex temp;
    temp.a = -a;
    temp.b = -b;
    return temp;
  }
};
int main()
{
  Complex c1, c2;
  c1.setData(3, 4);
  // type=------01
  //  c2 = c1.operator-();
  // type--------02
  c2 = -c1;
  c2.showdata();
  return 0;
}