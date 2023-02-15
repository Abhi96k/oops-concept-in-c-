#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
  int a;
  int b;

public:
  void set_data(int x, int y)
  {
    a = x;
    b = y;
  }
  void show_data()
  {
    cout << " a " << a << endl;
    cout << " b " << b << endl;
  }
};

int main()
{
  Complex c1; // c1 is object it consume memory but in struct variable does not concuming memory either assiging value them
  c1.set_data(3, 4);
  c1.show_data();
  return 0;
}