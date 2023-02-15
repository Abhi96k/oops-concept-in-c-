#include <bits/stdc++.h>
using namespace std;
struct book
{
  int bookid;
  char title[20];
  float price;
};
book input()
{
  book b;
  cout << "Eentre book id,tilte,price of book" << endl;
  cin >> b.bookid >> b.title >> b.price;
  return (b);
}
void dispaly(book b)
{
  cout << b.bookid << endl;
  cout << b.title << endl;
  cout << b.price << endl;
}
int main()
{
  book b1;
  b1 = input();
  dispaly(b1);
  return 0;
}