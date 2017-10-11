#include <iostream>
using namespace std;

void totallymod (int n) {
  if (n < 10) {
    cout << n << " ";
  }
  else {
    totallymod (n/10);
    cout << n%10 << " ";
  }

}

int main () {
  totallymod (145789);
  cout << endl;
}
