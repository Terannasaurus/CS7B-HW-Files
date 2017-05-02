//
//  main.cpp
//  Pointers
//
//  Created by Teran on 2/28/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>

int main() {
    /*
    char letter;
    short number;
    float amount;
    double profit;
    char ch;
    
    
    std::cout << "Address to letter:             " << long(&letter) << std::endl;
    std::cout << "Address to number:             " << long(&number) << std::endl;
    std::cout << "Address to amount:             " << long(&amount) << std::endl;
    std::cout << "Address to profit:             " << long(&profit) << std::endl;
    std::cout << "Address to ch:                 " << long(&ch) << std::endl;
    
    
    int x = 25;
    int *ptr;
    
    
    ptr = &x;
    
    
    std::cout << "Address of x:                  " << &x << std::endl;
    std::cout << "Address of ptr:                " << ptr << std::endl;
    std::cout << "Value that ptr points to is:   " << *ptr << std::endl;
    
    
    *ptr = 100;
    
    
    std::cout << "X is now:                      " << x << std::endl;
    
    
    int y = 50;
    int z = 75;
    
    
    ptr = &y;
    *ptr *= 2;
    
    
    ptr = &z;
    *ptr *= 2;
    
    std::cout << "                               " << x << " " << y << " " << z << std::endl;
    
    
    short numbers[] = {10, 20, 30, 40, 50};
    
    
    std::cout << &numbers << "     contains:   " << *numbers << std::endl << std::endl;
    
    
    for(int i = 0; i < 5; i++) {
        
        std::cout << *(numbers + i) << ": " << long(&numbers[i]) << " ";
        
    }
    
    std::cout << std::endl << std::endl;
    
    const int SIZE = 5;
    double coins[SIZE] = {0.05, 0.1, 0.25, 0.5, 1.00};
    double* doublePtr;
    
    
    doublePtr = coins;
    
    
    std::cout << std::fixed << std::setprecision(2);
    
    
    for(int i = 0; i < SIZE; i++) {
        
        std::cout << doublePtr[i] << " ";
        
    }
    
    
    std::cout << std::endl << std::endl;
    
    
    double* doublePtr2 = nullptr;
    
    
    for(int i = 0; i < SIZE; i++) {
        
        std::cout << *(coins + i) << " ";
        doublePtr2 = &coins[i];
        std::cout << long(doublePtr2) << " ";
    }
    
    
    std::cout << std::endl << std::endl;
    std::cout << long(doublePtr2) << std::endl;
    
    
    std::cout << std::endl << std::endl;
    */
    
    const int SET_SIZE = 8;
    int mySet[SET_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    
    
    int* numPtr;
    numPtr = mySet;
    
    
    for(int i = 0; i < SET_SIZE; i++) {
        
        std::cout << *numPtr << " ";
        
        if(i < 7) {
            
            numPtr ++;
            
        }
        
        
    }
    
    
    std::cout << std::endl << std::endl;
    
    std::cout << *numPtr << std::endl;
    
    
    return 0;
}
