#include <iostream>
using namespace std;

void countem (int n) {
  int current = 1;
  if (n<=1)
    cout << n << endl;
  else {
    cout << n << " ";
    countem (n-1);
  }
}

int main () {
  countem (7);
}
