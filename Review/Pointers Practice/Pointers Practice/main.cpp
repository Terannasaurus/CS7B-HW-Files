//
//  main.cpp
//  Pointers Practice
//
//  Created by Teran on 3/6/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>

int main() {
    
    const int SIZE = 5;
    int nums[SIZE] = {5, 10, 15, 20, 25};
    
    //int* numPtr;
    
    for(int i = 0; i < SIZE; i++) {
        
        std::cout << *(nums + i) << " ";
        
    }
    
    std::cout << std::endl << std::endl;
    
    return 0;
}
