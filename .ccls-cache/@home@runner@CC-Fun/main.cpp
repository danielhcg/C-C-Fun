#include <iostream>
using namespace std;

int main() {
  // LOOP CONSTRUCTS

  // FOR LOOP
  cout << "Created using a for loop      : ";
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << " ";
  }
  cout << "\n";
  // WHILE LOOP
  cout << "Created using a while loop    : ";
  int i = 1;
  while (i <= 5) {
    cout << i << " ";
    i++;
  }
  cout << "\n";
  // DO WILE LOOP
  cout << "Created using a do while loop : ";
  int j = 1;
  do {
    cout << j << " ";
    j++;
  } while (j <= 5);
}