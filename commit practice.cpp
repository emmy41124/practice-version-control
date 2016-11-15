#include <iostream>

using namespace std;

int main() {
  int array[9][9];
  int i = 1, j = 1, x = 0, y = 0;

  while (i < 10) {
    while (j < 10) {
      array[j-1][i-1] = i * j;
      j++;
    }
    i++;
    j = 1;
  }

  while (x < 9) {
    while (y < 9){
      cout << array[y][x] << " ";
      y++;
    }
    cout << endl;
    x++;
    y = 0;
  }

}
