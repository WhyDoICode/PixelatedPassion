/*

Write a program to check if two given strings are anagrams of each other.

*/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.length() != b.length()) {
        cout << "They are not anagrams";
        return 0;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b) {
        cout << "They are anagrams";
    } else {
        cout << "They are not anagrams";
    }

    return 0;
}