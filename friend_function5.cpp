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
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
  }
  friend ostream &operator(ostream &, Complex);
};

ostream &oprator << (ostream, 7DOUT, Complex C)
{
}
int main()
{
  Complex c1;
  cin >> c1;

  return 0;
}