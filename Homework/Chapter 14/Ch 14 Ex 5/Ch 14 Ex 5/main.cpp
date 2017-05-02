//
//  main.cpp
//  Ch 14 Ex 5
//
//  Created by Teran on 4/20/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>


int Recursive_Multiplication(int, int);


int main() {
    
    int x, y;
    
    std::cout << "Enter two numbers to perform recursive multpiplication:   ";
    std::cin >> x >> y;
    
    std::cout << "\nThe product:  " << x << " * " << y << " = " << Recursive_Multiplication(x, y) << std::endl << std::endl;
    
    return 0;
}


int Recursive_Multiplication(int x, int y) {
    
    if (x == 0) {
        
        return 0;
        
    }
    
    if(x > 0) {
        
        return y + Recursive_Multiplication(x - 1, y);
        
    } else {
        
        return -Recursive_Multiplication(-x, y);
        
    }
    
}





