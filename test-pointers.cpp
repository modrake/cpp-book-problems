#include <iostream>
using namespace std;

int main () {

  int *p = new int;
  *p = 5;
  cout << p << endl;
  cout << *p << endl;

  int q = 7;
  p = &q;
  cout << *p << endl;

return (0);
}
