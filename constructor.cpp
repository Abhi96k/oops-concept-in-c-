// constructor is member function of class
// name : constructor name--class name
//  No return type
//  it must be an instance member function that is it can be never be statics

// constructor is implicity call when object is created

// constructor solve problem of initillization

#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
  int a;

public:
  Complex()
  {
    cout << "hello Constructor" << endl;
  }
};
int main()
{
  Complex C1, c2, c3;
  return 0;
}
