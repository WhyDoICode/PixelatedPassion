/*

Write a program to convert a given string to uppercase.


*/


#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main() {
   
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str;
    return 0;
}