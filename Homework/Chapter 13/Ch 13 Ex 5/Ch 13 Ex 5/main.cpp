//
//  main.cpp
//  Ch 13 Ex 5
//
//  Created by Teran on 4/18/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

    
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
    
    
void findStr(std::string, std::string);
    
    
int main() {
        
    std::string fName, wrd;
        
    std::cout << "Enter the name of the file:                  ";
    std::cin >> fName;
        
    std::cout << "Enter the word you want me to search for:    ";
    std::cin >> wrd;
    
    findStr(fName, wrd);
    
    return 0;
}
    
    
void findStr(std::string fileName, std::string word) {
    
    std::fstream userFile;
    std::string line;
    std::string temp;
    std::vector<std::string> w;
    int found = 0;
        
    userFile.open(fileName, std::ios::in);
        
    if (userFile.fail()) {
            
        std::cout << "Error, " << fileName << " could not be opened." << std::endl;
            
    } else {
            
        while (userFile.good()) {
            
            getline(userFile, line);
            
            w.push_back(line);
                
        }
        
        for (int x = 0; x < w.size(); x++) {
            
            temp = w[x];
            
            for (int y = 0; y < temp.length(); y++) {
                
                found = std::find(<#_InputIterator __first#>, , word)
                
                if () {
                    
                    
                    
                }
                
            }
            
        }
            
    }
        
}
