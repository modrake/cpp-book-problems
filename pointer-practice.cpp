#include <iostream>
using namespace std;


void dostuff (int a, int *b, int *c) {
  a = 3;
  *b = 3;
  cout << a << " " << *b << " " << *c << endl;
}

int main() {
  int a = 0;
  int *b = new int;
  int *c = new int;

  *b = 1;
  *c = 2;

  cout << a << " " << *b << " " << *c << endl;

  dostuff (a, b, c);

  cout << a << " " << *b << " " << *c << endl;

  return 0;
}
