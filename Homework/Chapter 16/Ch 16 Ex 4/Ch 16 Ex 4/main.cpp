//
//  main.cpp
//  Ch 16 Ex 4
//
//  Created by Teran on 4/25/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <vector>

template <typename T>

T accumulate(std::vector<T> v) {
    
    T sum = v[0];
    
    for (unsigned i = 1; i < v.size(); i++) {
        
        sum += v[i];
        
    }
    
    return sum;
    
}

int main() {
    
    std::vector<int> intNums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<double> doubleNums = {1, 1, 2, 3, 5, 8, 13, 21, 34};
    std::vector<std::string> words = {"Ivan ", "is ", "a ", "lil ", "bitch ", "ass ", "nigga."};
    
    std::cout << accumulate(intNums) << " " << accumulate(doubleNums) << " " << accumulate(words) << "\n";
    
    return 0;
}
