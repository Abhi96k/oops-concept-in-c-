#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
  int a;
  int b;

public:
  void set_data(int, int);
};

void Complex::set_data(int x, int y) // inline kiya hai
{
  a = x;
  b = y;
}
int main()
{
  Complex c1;
  return 0;
}