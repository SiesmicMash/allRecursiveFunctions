//
//  findIndexOfFristDigitInString.cpp
//  recursivePractice#1
//
//  Created by Usaid Ali Syed on 2025-01-23.
//

#include <iostream>
#include <string>
using namespace std;

bool isUpper(string s, int index) {
    return s[index] >= 'A' && s[index] <= 'Z';
}

bool isDigit(string s, int index) {
    return s[index + 1] >= '0' && s[index + 1] <= '9';
}

int findIndex(const string &s, int start, int last) {
    // Pre-condition: s is a string made of lower followed
    // by upper case followed by digit characters
    // Assume that there is at least one lower case, one upper case, and at least one digit character
    // start is the index of the first character in the string
    // last is the index of the last character in the string

    // Post-condition: the function computes and returns the index of the
    // last upper case character in the string
    
    int m = (start + last) / 2;
    if (isUpper(s,m)&& isDigit(s, m))
        return m;
    else if (isDigit(s, m))
        return findIndex(s, start, m - 1);
    else
        return findIndex(s, m + 1, last);
}
/*
int main() {
    string s = "abcdeGHIJK5209817";
    int index = findIndex(s, 0, s.length() - 1);
    cout << "The index of the last uppercase character in the string is " << index << endl;

    return 0;
}
*/

