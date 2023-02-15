#include <bits/stdc++.h>
using namespace std;
struct book
{
  int bookid;
  char title[20];
  float price;
};

int main()
{
  struct book b1 = {100, "ABhishek coder", 45.2};
  book b2, b3;
  b2.bookid = 101;
  strcpy(b2.title, "Ai engineering");
  b2.price = 300.0;

  b3 = b2;

  return 0;
}