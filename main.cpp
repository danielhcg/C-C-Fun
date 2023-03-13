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

  cout << "\n";
  
  // Declaration of all data types supported by the language
  bool myBool;
  char myChar;
  float myFloat;
  double myDouble;

  // Assignment of all data types supported by the language
  myBool   = true;
  myChar   = 'A';
  myFloat  = 3.14;
  myDouble = 3.14159;

  // Printing all data types supported by the languages
  cout << "myBool  : " << myBool << endl;
  cout << "myChar  : " << myChar << endl;
  cout << "myFloat : " << myFloat << endl;
  cout << "myDouble: " << myDouble << endl;

}