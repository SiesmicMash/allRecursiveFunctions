//
//  largestValueInArray.cpp
//  recursivePractice#1
//
//  Created by Usaid Ali Syed on 2025-01-20.
//

#include <stdio.h>
#include <cassert>
using namespace std;

int maxValue (int arr[], int first, int last) {
    assert (first <= last);
    
    if (first == last) {
        return arr[first];
    } else {
        int mid = (first + last)/2;
        int temp1 = maxValue(arr, first, mid);
        int temp2 = maxValue(arr, mid, last);
        
        if( temp1 > temp2)
            return temp1;
        else
            return temp2;
    }
}
/*
int main() {
    
    const int size= 12;
    int arr[size] = {5,-2, 2, 8, 1, 15, 6, 0, -2, -15, 3, 13};
        
    int startIndex = 0, lastIndex = size -1;
    int largest = maxValue(arr, startIndex, lastIndex);
    
    return 0;
     
}

*/
