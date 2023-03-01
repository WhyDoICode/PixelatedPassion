/*

Write a C++ program that takes a string as input and prints its length.

*/


#include <iostream>
#include  <bits/stdc++.h>

using namespace std;


int main() {
   
    string s;
    getline(cin, s);
    cout << s.length() << endl;
    
    return 0;
}