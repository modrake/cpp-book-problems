#include <iostream>
using namespace std;


int mystery(int a, int b, int c) {
  if (c==0) return a - 1;
  else return b + mystery(a, b, c-1);
}

int main () {

  cout << "1: " << mystery(4,2,1) << endl;
  cout << "2: " << mystery(1,2,2) << endl;
  cout << "3: " << mystery(3,4,4) << endl;
  cout << "4: " << mystery(6,5,3) << endl;
  
}
