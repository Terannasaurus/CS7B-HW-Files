//
//  main.cpp
//  Ch 12 Ex 3
//
//  Created by Brandon Teran on 4/16/17.
//  Copyright © 2017 Brandon Teran. All rights reserved.
//

#include <iostream>
#include <cstring>

int main() {
    
    const int SIZE = 50;
    
    char sentence[SIZE];
    
    std::cout << "Enter a sentence:                 ";
    std::cin.getline(sentence, SIZE);
    std::cout << "The correct punctuation is:       ";
    
    if (*sentence == ' ') {
        
        sentence[1] = toupper(sentence[1]);
        
    } else {
        
        sentence[0] = toupper(sentence[0]);
        
    }
    
    for(unsigned i = 0; i < strlen(sentence); i++){
        
        if(ispunct(sentence[i]) || ispunct(sentence[i+1])){
            
            sentence[i + 2] = toupper(sentence[i + 2]);
            
        }
        
    }
    
    for (unsigned i = 0; i < strlen(sentence); i++) {
        
        std::cout << sentence[i];
        
    }
    
    return 0;
}
