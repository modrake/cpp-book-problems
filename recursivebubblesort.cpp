
#include <iostream>

void bubblesort (int arr[]) {
  bool flipped = false;

  for (int i=0; i<4; i++) {
    if (arr[i] > arr[i+1]) {
      flipped = true;
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }
  }

  if (flipped) {
    bubblesort (arr);
  }
  else return;

}



int main() {
  int a[] = {0, 3, 2, 1, 5};

  bubblesort (a);

  for (int i=0;i<5;i++) {
    std::cout << a[i] << " ";
  }


  return 0;
}
