//
//  Names.cpp
//  Ch 9 Ex 15
//
//  Created by Teran on 2/28/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "Names.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>


void Names::readFile() {
    
    std::vector <std::string> tempVector;
    std::string names[20];
    std::string firstNames[20];
    std::string lastNames[20];
    
    std::string line;
    
    std::ifstream readFile("names.txt");
    
    if(readFile.is_open()) {
        
        while(!readFile.eof()) {
            
            while(getline(readFile, line)) {
                
                tempVector.push_back(line);
                
            }
            
        }
        
    } else {
        
        std::cout << "ERROR READING FILE" << std::endl;
        
    } readFile.close();
    
    //std::string value;
    
    for(unsigned int i = 0; i < tempVector.size(); i ++) {
        
        std::string tempName = tempVector[i];
        names[i] = tempName;
        
    }
    
    
    std::cout << "Unordered Names" << std::endl;
    std::cout << "---------------" << std::endl;
    
    
    for(int i = 0; i < 20; i ++) {
        
        int comma = names[i].find(',');
        std::string lastName = names[i].substr(0, comma);
        std::string firstName = names[i].substr(comma + 2, names[i].size() - comma);
        firstName[i] = firstName;
        lastName[i] = lastName;
        
        std::cout << names[i] << std::endl;
        
    }
    
    
    std::cout << "---------------" << std::endl;
    std::cout << std::endl;
    
    
    const int size = 20;
    
    std::string temp;
    
    bool madeSwap = true;
    
    do{
        
        madeSwap = false;
        
        for(int i = 0; i < size - 1; i ++) {
            
            if(names[i] > names[i + 1]) {
                
                temp = names[i];
                names[i] = names [i + 1];
                names[i + 1] = temp;
                
            }
            
        }
        
    }while(madeSwap);
    
    
    
    std::cout << "\t  Ordered List" << std::endl;
    
    for(int i = 0; i < size; i ++) {
        std::cout << names[i] << std::endl;
        
        
    }
    
    std::cout << std::endl << std::endl;
    
}




