//
//  main.cpp
//  Ch 13 Ex 1
//
//  Created by Brandon Teran on 4/16/17.
//  Copyright © 2017 Brandon Teran. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>


int main() {
    
    std::string fileName;
    std::vector<std::string> read;
    std::string input;
    
    std::cout << "Enter thename of the file:            ";
    std::cin >> fileName;
    
    std::fstream inFile;
    inFile.open(fileName, std::ios::in);
    
    if (inFile.fail()) {
        
        std::cout << "There was an error opening the file:  " << fileName << std::endl;
        
        return 0;
        
    }
    
    while (inFile.good()) {
        
        getline(inFile, input);
        
        read.push_back(input);
        
    }
    
    if (read.size() > 10) {
        
        for (int i = 0; i < 10; i++) {
            
            std::cout << read[i] << std::endl;
            
        }
        
        std::cout << "Displayed first 10 lines of the file." << std::endl;
        
    } else {
        
        for (int i = 0; i < read.size(); i++) {
            
            std::cout << read[i] << std::endl;
            
        }
        
        std::cout << "Displayed entire file." << std::endl;
        
    }
    
    
    return 0;
}
