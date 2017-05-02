//
//  main.cpp
//  Ch 10 Ex 7
//
//  Created by Teran on 3/7/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <iomanip>

int GetMode(int daArray[], int iSize) {
    // Allocate an int array of the same size to hold the
    // repetition count
    int* ipRepetition = new int[iSize];
    
    for (int i = 0; i < iSize; ++i) {
        
        ipRepetition[i] = 0;
        int j = 0;
        //bool bFound = false;
        
        while ((j < i) && (daArray[i] != daArray[j])) {
            
            if (daArray[i] != daArray[j]) {
                
                ++j;
                
            }
            
        }
        
        ++(ipRepetition[j]);
        
    }
    
    int iMaxRepeat = 0;
    
    for (int i = 1; i < iSize; ++i) {
        
        if (ipRepetition[i] > ipRepetition[iMaxRepeat]) {
            
            iMaxRepeat = i;
            
        }
        
    }
    
    delete [] ipRepetition;
    return daArray[iMaxRepeat];
}


int GetMedian(int daArray[], int iSize) {
    
    // Allocate an array of the same size and sort it.
    double* dpSorted = new double[iSize];
    
    for (int i = 0; i < iSize; ++i) {
        
        dpSorted[i] = daArray[i];
        
    }
    
    for (int i = iSize - 1; i > 0; --i) {
        
        for (int j = 0; j < i; ++j) {
            
            if (dpSorted[j] > dpSorted[j+1]) {
                
                double dTemp = dpSorted[j];
                dpSorted[j] = dpSorted[j+1];
                dpSorted[j+1] = dTemp;
                
            }
            
        }
        
    }
    
    // Middle or average of middle values in the sorted array.
    int dMedian = 0;
    
    if ((iSize % 2) == 0) {
        
        dMedian = (dpSorted[iSize/2] + dpSorted[(iSize/2) - 1])/2.0;
        
    } else {
        
        dMedian = dpSorted[iSize/2];
        
    }
    
    delete [] dpSorted;
    return dMedian;
}


int main() {
    
    double average;
    double median;
    double mode;
    double total = 0;
    int temp;
    //int counter = 0;
    
    int data;
    
    std::cout << "Enter the number of students surveyed: ";
    std::cin >> data;
    
    int* numberArray = new int[data];
    
    for(int i = 0; i < data; i++) {
        
        std::cout << "Number of movies student " << i + 1 <<  " seen: ";
        std::cin >> numberArray[i];
        
    }
    
    std::cout << std::endl;
    
    for(int i = 0; i < data; i++) {
        
        temp = numberArray[i];
        
        total += temp;
        
        //counter ++;
    }
    
    average = total/data;
    
    median = GetMedian(numberArray, data);
    
    mode = GetMode(numberArray, data);
    
    
    std::cout << std::fixed << std::setprecision(2) << "The average is : " << average << std::endl << std::endl;
    std::cout << "The median is  : " << median << std::endl << std::endl;
    std::cout << "The mode is    : " << mode << std::endl << std::endl;
    
    return 0;
}
