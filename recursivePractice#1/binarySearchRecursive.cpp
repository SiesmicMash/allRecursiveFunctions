//
//  binarySearchRecursive.cpp
//  recursivePractice#1
//
//  Created by Usaid Ali Syed on 2025-01-20.
//

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>

int binarySearch(const int *anArray, const int &first, const int &last, const int &target) {
    int index = 0;
    if (first > last)
        index = -1;
    else {
        int mid = first + (last - first) / 2;
        if (target == anArray[mid])
            index = mid;
        else if (target < anArray[mid])
            index = binarySearch(anArray, first, mid - 1, target);
        else
            index = binarySearch(anArray, mid + 1, last, target);
    }
    return index;
}

