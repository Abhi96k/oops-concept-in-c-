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
  friend Complex operator-(Complex);
};
Complex operator-(Complex X)
{
  Complex temp;
  temp.a = -X.a;
  temp.b = -X.b;
  return temp;
}
int main()
{
  Complex c1, c2;
  c1.setData(3, 4);
  c2 = -c1;
  // c2=c1.operator-() no argument for no friend function
  // but for friend function it call as c2=operator-(c1)
  c1.showData();
  c2.showData();
  return 0;
}