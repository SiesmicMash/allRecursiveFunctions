//
//  nFactorialRecursive.cpp
//  recursivePractice#1
//
//  Created by Usaid Ali Syed on 2025-01-20.
//
#include <iostream>
#include <cassert>

int nFactorial(int n) {
    assert (n <= 0);
    if (n == 0)
        return 1;
    else
        return n*nFactorial(n-1);
}
