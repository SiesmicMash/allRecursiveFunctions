//
//  stringBackward.cpp
//  recursivePractice#1
//
//  Created by Usaid Ali Syed on 2025-01-20.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string stringBackward(string s)
{
    int length = s.size();
    if (length > 0) {
        return s[length - 1] + stringBackward(s.substr(0, length - 1));
    }
    else {
        return "";
    }
}

