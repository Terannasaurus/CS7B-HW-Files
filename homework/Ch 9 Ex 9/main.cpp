//
//  main.cpp
//  Ch 9 Ex 9
//
//  Created by Brandon Teran on 2/21/17.
//  Copyright © 2017 Brandon Teran. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

const int SIZE = 20;
int COUNTER1, COUNTER2;

void fillArray(int []);
void displayArray(int []);
void bubbleSort(int []);
void selectionSort(int []);

int main() {
    
    
    int array1[SIZE];
    int array2[SIZE];
    
    
    fillArray(array1);
    fillArray(array2);
    
    
    std::cout << "Here are the two arrays:" << std::endl << std::endl;
    
    
    displayArray(array1);
    std::cout << std::endl << std::endl;
    
    
    displayArray(array2);
    std::cout << std::endl << std::endl;
    
    std::cout << "\t\t\t\t\t Bubble Sort" << std::endl;
    bubbleSort(array1);
    std::cout << std::endl << std::endl;
    
    std::cout << "\t\t\t\t\tSelection Sort" << std::endl;
    selectionSort(array2);
    std::cout << std::endl << std::endl;
    
    
    std::cout << "The Bubble Sort Function made:         " << COUNTER1 << " changes." << std::endl << std::endl;
    std::cout << "The Selection Sort Function made:      " << COUNTER2 << " changes." << std::endl << std::endl;
    
    
    return 0;
    
}


void fillArray(int arr[]) {
    
    srand(time(NULL));
    
    int num;
    
    for(int i = 0; i < SIZE; i ++) {
        
        num = rand() % 21;
        
        arr[i] = num;
        
    }
    
}

void displayArray(int arr[]) {
    
    
    for(int i = 0; i < SIZE; i ++) {
        
        std::cout << arr[i] << " ";
        
    }
    
}


void bubbleSort(int arr[]) {
    
    int temp;
    int counter = 0;
    bool madeSwap = true;
    
    
    do {
        
        madeSwap = false;
        
        for(int i = 0; i < (SIZE - 1); i ++) {
            
            if(arr[i] < arr[i + 1]) {
                
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                madeSwap = true;
                counter ++;
                
            }
            
        }
        
    } while (madeSwap);
    
    COUNTER1 = counter;
    
    for(int i = 0; i < SIZE; i ++) {
        
        std::cout << arr[i] << " ";
        
    }
    
}


void selectionSort(int arr[]) {
    
    int i, minIndex, minValue;
    int counter = 0;
    
    for(i = 0; i < (SIZE - 1); i ++) {
        
        minIndex = i;
        minValue = arr[i];
        
        for(int j = i + 1; j < SIZE; j++ ) {
            
            if(arr[j] < minValue) {
                
                minValue = arr[j];
                minIndex = j;
                counter ++;
                
            }
            
        }
        
        arr[minIndex] = arr[i];
        arr[i] = minValue;
        
    }
    
    COUNTER2 = counter;
    
    for(int i = 0; i < SIZE; i ++) {
        
        std::cout << arr[i] << " ";
        
    }
    
}












