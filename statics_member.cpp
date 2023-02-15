#include <bits/stdc++.h>
using namespace std;
class Account
{
private:
  int balance;      // instance memeber variable
  static float roi; // static memeber vraible or class varaiable//
public:
  void setBalance(int b)
  {
    balance = b;
  }
};

float Account ::roi = 3.5f; // geting roi variable memory//by default it is zero(0)//by deulft value cannot get memory

int main()
{
  Account a1, a2;

  return 0;
}