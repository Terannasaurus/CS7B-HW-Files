//
//  main.cpp
//  TemplateSquare
//
//  Created by Teran on 4/25/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>

template <class T>

T square(T number) {
    
    return number * number;
    
}

int main() {
    
    int intNum = 5;
    double dblNum = 5.00;
    
    
    std::cout << square(intNum) << " " << square(dblNum) << std::endl;
    
    std::cout << std::endl << std::endl;
    
    
    return 0;
}
