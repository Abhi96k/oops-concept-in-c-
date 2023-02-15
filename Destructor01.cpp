// destructor is an instance memeber function
// class name == ~destructor_name(calss name)
// destructor never be statics
//  destructor has no return type
//  destructor take no argument(no overloading)
#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
  int a;
  int b;

public:
  ~Complex()
  {
    cout << "destructor" << endl;
  }
};
void fun()
{
  Complex obj;
}
int main()
{
  fun();
  return 0;
}

// it should be defined to release resource allocated to an object
// it should be define to release resource allocated to an object
