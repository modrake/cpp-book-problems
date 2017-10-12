#include <iostream>
using namespace std;

int sum (int start, int end) {
  //int total = start;
  if (start >= end) {
    return start;
  }
  else {
    return (start + sum (start+1,end));
    //return total;
  }
}

int main () {
  int i=0;

  for (int c=2;c<=7;c++) {
    i += c;
  }

  int r=sum (2,7);
  cout << "Iterative: " << i << endl;
  cout << "Recursive: " << r << endl;
}
