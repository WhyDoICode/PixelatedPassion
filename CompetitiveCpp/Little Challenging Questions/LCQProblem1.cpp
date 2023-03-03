/*

Write a program to reverse a string without using any built-in functions or libraries.

*/


#include <iostream>

using namespace std;


int main() {
   
  string str;
  cin >> str;
  char answer[str.length()];
  for (int i = str.length() - 1, x = 0; i >= 0; --i, ++x)
  {
    answer[x] = str[i]; 
  }
  answer[str.length()] = '\0'; // Add null character at the end
  cout << answer << endl;
   
    return 0;
}
