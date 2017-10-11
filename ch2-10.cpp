#include <iostream>
using namespace std;

void writeLine (char c, int i) {
  if (i==0)
    return;
  else if (i==1)
    cout << c << endl;
  else {
    cout << c;
    writeLine (c, i-1);
  }
}

void writeBlock (char c, int i, int j) {
  if (j==0)
    return;
  else if (j==1)
    writeLine (c,i);
  else {
    writeLine (c,i);
    writeBlock (c,i,j-1);
  }

}


int main () {

  writeLine ('*',5);
  cout << endl;
  writeBlock ('&',5,7);
  return 0;
}
