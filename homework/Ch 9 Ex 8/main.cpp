//
//  main.cpp
//  Ch 9 Ex 8
//
//  Created by Brandon Teran on 2/21/17.
//  Copyright © 2017 Brandon Teran. All rights reserved.
//

#include <iostream>


int myLinearSearch(const int [], int, int);

int myBinarySearch(const int [], int, int);

const int SIZE = 20;

int COUNTER1, COUNTER2;

int main() {
    
    int result1, result2;
    int value;
    
    const int numberArray[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    
    
    std::cout << "Enter a value: ";
    
    std::cin >> value;
    
    std::cout << std::endl << std::endl;
    
    
    result1 = myLinearSearch(numberArray, SIZE, value);
    result2 = myBinarySearch(numberArray, SIZE, value);
    
    
    if((result1 == -1) && (result2 == -1)) {
        
        std::cout << "Error. Your value was not found." << std::endl << std::endl;
        
    } else {
        
        std::cout << "The Linear Search made:     " << COUNTER1 << " comparisons" << std::endl << std::endl;
        std::cout << "The Binary Search made:     " << COUNTER2 << " comparisons" << std::endl << std::endl;
        
    }
    
    
    
    return 0;
}


int myLinearSearch(const int numArray[], int size, int value) {
    
    int index = 0;
    int counter = 0;
    int position = -1;
    bool found = false;
    
    while((index < size) && !found) {
        
        if(numArray[index] == value) {
            
            found = true;
            position = index;
        }
        
        index ++;
        counter ++;
        
    }
    
    COUNTER1 = counter;
    
    return position;
    
}


int myBinarySearch(const int numArray[], int size, int value) {
    
    int counter = 0;
    int first = 0;
    int middle;
    int last = size - 1;
    int position = -1;
    bool found = false;
    
    
    while((first <= last) && !found) {
        
        //Set middle to be in between first and last
        middle = (first + last) / 2;
        
        //If the number (whose position in the array is middle) equals
        //the value, set found to true and position to middle's position
        if(numArray[middle] == value) {
            
            found = true;
            position = middle;
        
        //If the number was not equal to the value but is greater than
        //the value, change last and first
        } else if(numArray[middle] > value) {
            
            last = middle - 1;
            
        } else {
            
            first = middle + 1;
            
        }
        
        counter ++;
        
    }
    
    COUNTER2 = counter;
    
    return position;
}









