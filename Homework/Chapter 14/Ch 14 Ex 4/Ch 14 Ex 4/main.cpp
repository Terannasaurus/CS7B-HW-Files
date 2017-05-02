//
//  main.cpp
//  Ch 14 Ex 4
//
//  Created by Teran on 4/20/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>


int sum(int [], int);


int main() {
    
    int size;
    
    int *arr = new int [size];
    
    
    std::cout << "Enter the size of the array:      ";
    std::cin >> size;
    
    std::cout << "Enter each element in the array:  \n";
    
    for (int i = 0; i < size; i++) {
        
        std::cout << "Number " << std::setw(3) << i + 1 << " -->  ";
        std::cin >> arr[i];
        
    }
    
    /*for (int i = 0; i < size; i++) {
        
        std::cout << arr[i] << " ";
        
    }*/
    
    
    std::cout << "The sum of all the numbers in your array is:  " << sum(arr, size) << std::endl << std::endl;
    
    delete [] arr;
    
    return 0;
}

int n = 0;

int sum(int arr[], int size) {
    
    if (size == 0) {
        
        
        
    }
    
    return n;
    
}



















