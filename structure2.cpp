#include <bits/stdc++.h>
using namespace std;
struct book
{
  int bookid;
  char title[20];
  float price;

  void input()
  {
    cout << "Entre bookid,tilte and price" << endl;
    cin >> bookid >> title >> price;
  }
  void display()
  {
    cout << bookid << endl;
    cout << title << endl;
    cout << price << endl;
  }
};
int main()
{
  book b1;
  b1.input();
  b1.display();

  book b2;
  b2.input();
  b2.display();
  return 0;
}