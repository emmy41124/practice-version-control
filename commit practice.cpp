#include <iostream>

using namespace std;

int main() {
  int array[9][9];

  for (int i = 1; i < 10; i ++) {
    for (int j = 1; j < 10; j++) {
      array[j-1][i-1] = i * j;
    }
  }

  for (int i = 1; i < 10; i ++) {
    for (int j = 1; j < 10; j++) {
      cout << array[j-1][i-1] << " ";
    }
    cout << endl;
  }

}
