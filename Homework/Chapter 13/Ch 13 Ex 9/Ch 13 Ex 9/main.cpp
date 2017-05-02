//
//  main.cpp
//  Ch 13 Ex 9
//
//  Created by Teran on 4/19/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <fstream>

const int SIZE = 26;
char ASCII[SIZE];
int letterArr[SIZE];


void countLetters(std::string);


int main() {
    
    std::string fileName;
    
    for (int i = 0; i < SIZE; i++) {
        
        ASCII[i] = i + 65;
        
        letterArr[i] = 0;
        //std::cout << ASCII[i];
        
    }
    
    std::cout << "Enter the name of the file you wish to open:      ";
    std::cin >> fileName;
    std::cout << std::endl;
    
    countLetters(fileName);
    
    
    return 0;
}


void countLetters(std::string fileName) {
    
    std::string lines;
    std::string temp;
    int letterCounter = 65;
    int numOfTimes = 0;
    int i = 0;
    
    std::vector<std::string> fileLines;
    
    
    std::fstream iFile;
    iFile.open(fileName, std::ios::in);
    
    
    if (iFile.bad()) {
        
        std::cout << "The file, " << fileName << ", could not be opened." << std::endl << std::endl;
        
    } else {
        
        while (iFile.good()) {
            
            getline(iFile, lines);
            
            fileLines.push_back(lines);
            
            std::cout << fileLines[i] << std::endl;
            
            i++;
            
        }
        
        std::cout << std::endl << "Number of Times Each Letter Appeared" << std::endl << std::endl;
        
        for (int x = 0; x < SIZE; x++) {
            
            for (int y = 0; y < fileLines.size(); y++) {
                
                temp = fileLines[y];
                
                for (int z = 0; z < temp.length() ; z++) {
                    
                    if (ASCII[x] == toupper(temp[z])) {
                        
                        letterCounter++;
                        
                        numOfTimes = letterCounter;
                        
                        letterArr[x] += numOfTimes;
                        
                        letterCounter = 0;
                        
                    }
                    
                }
            
            }
            
            std::cout << std::setw(14) << ASCII[x] << ":     " << letterArr[x] << std::endl;
            
        }
        
    }
    
    std::cout << std::endl;
    
}













