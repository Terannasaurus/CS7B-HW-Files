//
//  main.cpp
//  Ch 12 Ex 1
//
//  Created by Teran on 4/4/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstring>

void countWords(char[], const int);

int main() {
    
    const int MAX_LENGTH = 500;
    char words[MAX_LENGTH];
    
    
    std::cout << "Enter a sentence no more than " << MAX_LENGTH - 1 << " words long:\n";
    std::cin.getline(words, MAX_LENGTH);
    
    std::cout << std::endl;
    countWords(words, MAX_LENGTH);
    
    return 0;
}



void countWords(char w[], const int SIZE) {
    
    int numOfWords = 0;
    
    for (int i = 0; i < SIZE; i++) {
        
        if (w[i] != ' ' && w[i + 1] == ' ') {
            
            numOfWords++;
            
        }
        
    }
    
    std::cout << "The number of words you entered was---" << numOfWords << "---words." << std::endl << std::endl;
}
