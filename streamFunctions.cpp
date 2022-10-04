#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
  #1 [Chapter 9]
  Convert string to int
  @param s user's string input of numbers
  @return converted string as an interger value
*/
int strToInt(string s){
  
  int convertedString;
  istringstream str(s);

  str >> convertedString;
  return convertedString;
}

/*
  #2 [Chapter 9]
  Convert int to string
  @param i user's number input
  @return converted interger value as a string
*/
string intToStr(int i){
  
  ostringstream toStr;
  toStr << i;

  return toStr.str();
}