#include <bits/stdc++.h>
using namespace std;
struct book
{
private: // acessing only in structure
  int bookid;
  char title[20];
  float price;

public: // acessing outside the structure
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

  return 0;
}