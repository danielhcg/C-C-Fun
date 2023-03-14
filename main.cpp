#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


  /***************** PARENT/CHILD CLASS ****************/
class Car {

  /*************** PUBLIC/PRIVATE MEMBERS **************/

private:
  int year;
public:
  string brand;
  void setYear(int x) { year = x; }
  int getYear() { return year; }
};

class Sedan : public Car {
public:
  void rev() {
    cout << "VVVRRRROOOOMMMM!" << endl;
  }
};

int main() {

  /****************** LOOP CONSTRUCTS ******************/
  
  // FOR LOOP
  cout << "Created using a for loop ---------- : ";
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << " ";
  }
  cout << "\n";
  // WHILE LOOP
  cout << "Created using a while loop -------- : ";
  int i = 1;
  while (i <= 5) {
    cout << i << " ";
    i++;
  }
  cout << "\n";
  // DO WILE LOOP
  cout << "Created using a do while loop ----- : ";
  int j = 1;
  do {
    cout << j << " ";
    j++;
  } while (j <= 5);

  cout << "\n\n";

  /******************** DATA TYPES *********************/
  
  // Declaration of all data types
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
  cout << "myBool ---------------------------- : " << myBool << endl;
  cout << "myChar ---------------------------- : " << myChar << endl;
  cout << "myFloat --------------------------- : " << myFloat << endl;
  cout << "myDouble -------------------------- : " << myDouble << endl;
  cout << "myUnsignedChar -------------------- : " << myUnsignedChar << endl;
  printf ("mySignedChar ---------------------- : %d\n", mySignedChar);
  printf ("myUnsignedInt --------------------- : %u\n", myUnsignedInt);
  printf ("myShort --------------------------- : %hd\n", myShort);
  printf ("myUnsignedShort ------------------- : %hu\n", myUnsignedShort);
  printf ("myLong ---------------------------- : %ld\n", myLong);
  printf ("myUnsignedLong -------------------- : %lu\n", myUnsignedLong);

  /***************** STRING CONCATENATE ****************/

  // Declaring and assigning a string in C
  char stringOne[50] = "\nYou stay classy, ";
  char stringTwo[50] = "San Diego.";

  // Concatenate
  strcat(stringOne, stringTwo);

  // Printing 
  printf("%s", stringOne);
  
  /***************** PARENT/CHILD CLASS ****************/

  Sedan accord;
  accord.brand = "Toyota";
  accord.setYear(2020);

  cout << "\n\nMy car is a " << accord.getYear() << " " << accord.brand << endl;
  cout << "It goes ";
  accord.rev();
  

  /************** MULTI-PARAMETER FUNCTION *************/

  return 0;

}

