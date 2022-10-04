#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "stream.h"

using namespace std;

int main() {
  
  //----------------Chapter 9-1----------------------

  int myNum1;
  string userString1;

  cout << "#1 string -> int\n";

  cout << "\nEnter a string to convert it into an integer (string of nums only):" << endl;
  cin >> userString1;
  cout << "\nUser input: " << userString1 << "\n";
  cout << "Type: " << typeid(userString1).name() << " - String" << endl;
  cout << "\n------------------------" << endl;
  cout << "\nconverting the string to an int..." << endl;
  myNum1 = strToInt(userString1); 
  cout << "User input: " << myNum1 << endl;
  cout << "Type: " << typeid(myNum1).name() << " - int" << endl;
  cout << "\n============================================================\n";

 //-------------------Chapter 9-2----------------------
  cout << "#2 int -> string\n";
  
  int myNum2;
  string userString2;

  cout << "\nEnter a integer to convert it into an string:" << endl;
  cin >> myNum2;
  cout << "\nUser input: " << myNum2 << "\n";
  cout << "Type: " << typeid(myNum2).name() << " - int" << endl;
  cout << "\n------------------------" << endl;
  cout << "\nconverting the int to string..." << endl;
  userString2 = intToStr(myNum2);
  cout << "\nUser input: " << userString2 << "\n";
  cout << "Type: " << typeid(userString2).name() << " - String" << endl;
  cout << "\n============================================================\n";

  //-----------------Chapter 9-3----------------------
  cout << "#3 write numbers 1-100 to file\n";
  ofstream numFile;

  numFile.open("coolNumbers.txt");
  cout << "generating numbers...\n";

  for(int i = 1; i < 101; i++) numFile << i << " "; 

  cout << "\nNumber generation complete! closing the file stream...\n";
  numFile.close();

  
  //---------------Chapter 9-4-----------------------
  int fileLength = 0;
  fstream fLen;
  fLen.open("coolNumbers.txt");
  fLen.seekg(0, ios::end);
  fileLength = fLen.tellg();

  cout << "The length of coolNumbers.txt is: " << fileLength;
  
} 