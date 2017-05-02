//
//  main.cpp
//  Midterm 1 Review
//
//  Created by Teran on 3/8/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>
#include <iomanip>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Review.h"


void fillArray(int [], int);

void Review::bubbleSort(int arr[], int size){
    
    int temp;
    bool madeSwap = false;
    
    while(!madeSwap) {
        
        for(int i = 0; i < size; i++) {
            
            if(arr[i] > arr[i + 1]) {
                
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                
                madeSwap = true;
                
            }
            
        }
        
    }
    
}

void Review::selectionSort(int arr[], int size){
    
    int minIndex;
    int minValue;
    int i;
    
    for(i = 0; i < size; i++) {
        
        minIndex = i;
        minValue = arr[i];
        
        for(int j = i + 1; j < size - 1; j++) {
            
            if(arr[j] < arr[i]) {
                
                minIndex = j;
                minValue = arr[j];
                i = minIndex;
                arr[i] = minValue;
                
            }
            
        }
        
        arr[minIndex] = arr[i];
        arr[i] = arr[minValue];
        
    }
    
}

int linearSearch(int arr[], int value, int size) {
    
    int position = -1;
    
    bool found = false;
    
    do {
        
        for(int i = 0; i < size; i++) {
            
            if(arr[i] == value) {
                
                position = i;
                found = true;
                
            }
            
        }
        
    } while(!found);
    
    return position;
}

int binarySearch(int arr[], int value, int size) {
    
    int position = -1;
    
    int first = 0;
    int last = size - 1;
    int middle;
    
    bool found = false;
    
    while(!found && (first <= last)) {
        
        middle = (first + last) / 2;
        
        if(arr[middle] == value) {
            
            position = middle;
            found = true;
            
        } else if(arr[middle] < value) {
            
            last = middle - 1;
            
        } else if(arr[middle] > value) {
            
            first = middle + 1;
            
        }
        
    }
    
    return position;
}


int main() {
    
    Review obj;

    const int SIZE = 10;
    
    int num;
    
    int arr1[SIZE];
    int arr2[SIZE];
    
    fillArray(arr1, SIZE);
    fillArray(arr2, SIZE);
    
    double l;
    double w;
    double h;
    
    std::cout << "Enter your length:                          ";
    std::cin >> l;
    std::cout << "Enter your width:                           ";
    std::cin >> w;
    std::cout << "Enter your height:                          ";
    std::cin >> h;
    
    obj.setLength(l);
    obj.setWidth(w);
    obj.setHeight(h);
    
    double v  = obj.volume();
    double sA = obj.surfaceArea();
    
    std::cout << "Your length is:                             " << obj.getLength() << std::endl;
    std::cout << "Your width is:                              " << obj.getWidth()  << std::endl;
    std::cout << "Your height is:                             " << obj.getHeight() << std::endl << std::endl;
    std::cout << "Volume of your prism is:                    " << v  << " cubed meters" << std::endl;
    std::cout << "Surface area of your prism is:              " << sA << " square meters" << std::endl;
    
    
    //obj.bubbleSort(arr1, SIZE);
    //obj.selectionSort(arr2, SIZE);
    
    std::cout << "Arrays have been sorted" << std::endl << std::endl;
    
    std::cout << "Choose a number between 0 - 10 to search:   ";
    std::cin >> num;
    std::cout << std::endl << std::endl;
    
    //obj.linearSearch(arr1, num, SIZE);
    //obj.binarySearch(arr2, num, SIZE);
    
    
    
    return 0;
}

void fillArray(int arr[], int size) {
    
    srand(time(NULL));
    
    for(int i = 0; i < size; i++) {
        
        arr[i] = rand() % 10 + 1;
        
    }
    
}
