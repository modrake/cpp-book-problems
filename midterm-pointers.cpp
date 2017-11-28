#include <iostream>
using namespace std;

void modifier (int a, int *b, int *c, int *&d) {
  a = 2;
  d = b;
  b = c;
  *c = 7;
  cout << a << endl;
  cout << *b << endl;
  cout << *c << endl;
  cout << *d << endl << endl;
}

int main () {
  int a = 6;
  int *b = new int;
  int *c = new int;
  int *d = c;

  *b = a;
  *c = 3;
  *d = 4;
  a = 0;

  cout << a << endl;
  cout << *b << endl;
  cout << *c << endl;
  cout << *d << endl << endl;

  modifier (a, b, c, d);

  cout << a << endl;
  cout << *b << endl;
  cout << *c << endl;
  cout << *d << endl << endl;


  return 0;
}
