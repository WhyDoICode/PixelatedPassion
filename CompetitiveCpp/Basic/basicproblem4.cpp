/*

Write a C++ program that takes a string as input and counts the number of vowels it contains.

*/


#include <iostream>

using namespace std;


int main() {
   
    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
      switch(tolower(str[i]))
      {
        case 'a':
          count++;
          break;
        case 'e':
          count++;
          break;
        case 'i':
          count++;
          break;
        case 'o':
          count++;
          break;
        case 'u':
          count++;
           break;
        break;
      }
    }

    cout << "Count Of Vowels: " << count << endl;
    
    return 0;
}