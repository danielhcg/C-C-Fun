#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  // LOOP CONSTRUCTS

  // FOR LOOP
  cout << "Created using a for loop ---- : ";
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << " ";
  }
  cout << "\n";
  // WHILE LOOP
  cout << "Created using a while loop -- : ";
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

  cout << "\n\n";
  
  // Declaration of all data types supported by the language
  bool             myBool;
  char             myChar;
  float            myFloat;
  double           myDouble;
  unsigned char    myUnsignedChar;
  signed char      mySignedChar;
  unsigned int     myUnsignedInt;
  short            myShort;
  unsigned short   myUnsignedShort;
  long             myLong;
  long             myUnsignedLong;

  // Assignment of all data types supported by the language
  myBool            =  true;
  myChar            =  'A';
  myFloat           =  3.14;
  myDouble          =  3.14159;
  myUnsignedChar    =  67;
  mySignedChar      =  -67;
  myUnsignedInt     =  12345;
  myShort           =  -499;
  myUnsignedShort   =  499;
  myLong            =  -23546325364765;
  myUnsignedLong    =  23546325364765;

  // Printing all data types supported by the languages
  cout << "myBool ------------ : " << myBool << endl;
  cout << "myChar ------------ : " << myChar << endl;
  cout << "myFloat ----------- : " << myFloat << endl;
  cout << "myDouble ---------- : " << myDouble << endl;
  cout << "myUnsignedChar ---- : " << myUnsignedChar << endl;
  printf("mySignedChar ------ : %d\n", mySignedChar);
  printf("myUnsignedInt ----- : %u\n", myUnsignedInt);
  printf("myShort ----------- : %hd\n", myShort);
  printf("myUnsignedShort --- : %hu\n", myUnsignedShort);
  printf("myLong ------------ : %ld\n", myLong);
  printf("myUnsignedLong ---- : %lu\n", myUnsignedLong);

  

}