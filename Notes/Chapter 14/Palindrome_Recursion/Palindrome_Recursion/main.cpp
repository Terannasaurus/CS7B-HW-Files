//
//  main.cpp
//  Palindrome_Recursion
//
//  Created by Teran on 4/20/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

bool isPalindrome(std::string);
bool isRecursivePalindrome(std::string);

int recursiveFactorial;

int main() {
    
    std::string str;
    
    std::cout << "Enter a string:   ";
    std::cin >> str;
    
    if (isPalindrome(str)){
        
        std::cout << "YEAH BOI\n";
        
    } else {
        
        std::cout << "DAMN BOI\n";
        
    }
    
    if (isRecursivePalindrome(str)){
        
        std::cout << "FUCK YEAH BOI\n";
        
    } else {
        
        std::cout << "FUCK DAMN BOI\n";
        
    }
    
    
    
    return 0;
}


bool isPalindrome(std::string str) {
    
    int first= 0;
    int last = str.length() - 1;
    
    while (first < last) {
        
        if (str[first] != str[last]) {
            
            return false;
            
        }
        
        first++;
        last++;
        
    }
    
    return true;
    
}


bool isRecursivePalindrome(std::string str) {
    
    if (str.length() <= 1) {
        
        return true;
        
    }
    
    char first = str[0];
    char last = str[str.length() - 1];
    
    if (first == last) {
        
        std::string shorter = str.substr(1, str.length() - 2);
        
        isRecursivePalindrome(shorter);
        
    } else {
        
        return false;
        
    }
    
    return false;
}
