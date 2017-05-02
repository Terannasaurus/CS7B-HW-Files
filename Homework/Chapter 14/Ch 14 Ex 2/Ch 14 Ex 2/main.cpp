//
//  main.cpp
//  Ch 14 Ex 2
//
//  Created by Teran on 4/20/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>

void sign(int);
void RecursiveSign(int);

int main() {
    
    int n = 5;
    std::cout << "----------------------" << std::endl;
    std::cout << "|| Regular Function ||" << std::endl;
    std::cout << "----------------------" << std::endl;
    
    sign(n);
    std::cout << std::endl << std::endl << "------------------------" << std::endl;
    std::cout << "|| Recursive Function ||" << std::endl;
    std::cout << "------------------------" << std::endl;
    
    RecursiveSign(n);
    
    std::cout << std::endl;
    
    return 0;
}


void sign(int n) {
    
    while (n > 0) {
        
        std::cout << "      No Parking\n";
        
        n--;
        
    }
    
}


void RecursiveSign(int n) {
    
    if (n > 0) {
        
        RecursiveSign(n - 1);
        
        std::cout << "      No Parking\n";
        
    }
    
}






