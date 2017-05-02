//
//  main.cpp
//  Ch 16 Ex 2
//
//  Created by Teran on 4/25/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>

class SquareRootException{

public:
    
    class Not_Square {
    
        Not_Square() {
            
            std::cout << "Not a perfect square";
            
        }
    
    };
    
    
};

int squareRoot(int);

int main() {
    
    int n;
    int root;
    
    std::cout << "Enter a number:   "; std::cin >> n;
    
    try {
        root = squareRoot(n);
        
        std::cout << "The square root of " << n << " is " << root << std::endl;
        
    } catch (std::string exceptionStr) {
        
        std::cout << exceptionStr;
        
    }
    
    return 0;
}


int squareRoot(int n) {
    
    std::string error = "\nNot a square number\n\n";
    
    for (int i = 1; i * i <= n; i++) {
        
        if (i * i == n) {
            
            return i;
            
        }
        
    }
    
    throw error;

}















