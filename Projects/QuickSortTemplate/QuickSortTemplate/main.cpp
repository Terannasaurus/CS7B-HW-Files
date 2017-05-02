//
//  main.cpp
//  QuickSortTemplate
//
//  Created by Teran on 4/27/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>


template <class T>
void Quick_Sort(T arr[], int start, int end);

template <class T>
int Partition(T arr[], int start, int end);


int main() {
    
    srand(time_t(NULL));
    
    const int SIZE = 100000;
    std::string strArr[5] = {"b", "z", "d", "i", "k"};
    long long int array[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        
        array[i] = (rand() % 100000000000)*3;
        
    }
    
    std::cout << std::endl;
    
    Quick_Sort(array, 0, SIZE);
    Quick_Sort(strArr, 0, 5);
    
    for (int k = 0; k < SIZE; k++) {
        
        std::cout << std::setw(7) << array[k] << " ";
        
    }
    
    std::cout << std::endl << std::endl;
    
    for (int k = 0; k < 5; k++) {
        
        std::cout << std::setw(7) << strArr[k];
        
    }
    
    std::cout << std::endl << std::endl;
    
    return 0;
}


template <class T>
void Quick_Sort(T arr[], int start, int end) {
    
    if (start < end) {
        
        int p = Partition(arr, start, end);
        
        Quick_Sort(arr, start, p - 1);
        
        Quick_Sort(arr, p + 1, end);
        
    }
    
}

template <class T>
int Partition(T arr[], int start, int end) {
    
    T pivotValue = arr[start];
    int pivotPosition = start;
    
    for (int pos = start + 1; pos <= end; pos++) {
        
        if (arr[pos] < pivotValue) {
            
            std::swap(arr[pivotPosition + 1], arr[pos]);
            
            std::swap(arr[pivotPosition], arr[pivotPosition + 1]);
            
            pivotPosition ++;
            
        }
        
    }
    
    return pivotPosition;
}





















