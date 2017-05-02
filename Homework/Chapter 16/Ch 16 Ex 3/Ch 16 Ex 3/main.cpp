//
//  main.cpp
//  Ch 16 Ex 3
//
//  Created by Teran on 4/25/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>

template <typename T>

T min(T x, T y) {
    
    return (x < y ? x : y);
    
}

template <typename T>

T max(T x, T y) {
    
    return (x > y ? x : y);
    
}

int main() {
    
    int x, y;
    double a, b;
    
    std::cout << "Enter two numbers:    ";
    std::cin >> x >> y;
    
    int intMin = min(x, y);
    int intMax = max(x, y);
    
    std::cout << "Min:      " << intMin << std::endl;
    std::cout << "Max:      " << intMax << std::endl;
    
    
    std::cout << "Enter two numbers:    ";
    std::cin >> a >> b;
    
    double dblMin = min(a, b);
    double dblMax = max(a, b);

    std::cout << "Min:      " << dblMin << std::endl;
    std::cout << "Max:      " << dblMax << std::endl;
    
    
    return 0;
}
