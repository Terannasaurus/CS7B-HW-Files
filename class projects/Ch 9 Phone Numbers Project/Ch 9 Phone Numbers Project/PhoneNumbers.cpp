//
//  PhoneNumbers.cpp
//  Ch 9 Phone Numbers Project
//
//  Created by Teran on 2/23/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "PhoneNumbers.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>


void PhoneNumbers::readFile() {
    
    //std::cout << "'" << file << "'" << " was succesffuly read." << std::endl;
    
    std::vector <std::string> tempVector;
    //std::string names[10];
    std::string numbers[10];
    //long long int phoneNumbers[10];
    
    std::string line;
    
    std::ifstream readFile("numbers.txt");
    
    if(readFile.is_open()) {
        
        while(!readFile.eof()) {
            
            while(getline(readFile, line)) {
                
                tempVector.push_back(line);
                
            }
            
        }
        
    } else {
        
        std::cout << "ERROR READING FILE" << std::endl;
        
    } readFile.close();
    
    std::string value;
    
    for(unsigned int i = 0; i < tempVector.size(); i ++) {
        
        int comma = tempVector[i].find(',');
        std::string tempName = tempVector[i].substr(0, comma);
        names[i] = tempName;
        std::string tempNum = tempVector[i].substr(comma + 1, tempVector[i].size());
        numbers[i] = tempNum;
        
    }


    std::cout << "   Names       Phone Numbers" << std::endl;
    
    for(int i = 0; i < 10; i ++) {
        
        std::cout << names[i] << " - " << numbers[i] << std::endl;
        
    }
    
    std::cout << std::endl;
    std::cout << std::endl;
    
    
    const int size = 10;
    
    std::string temp1, temp2;
    
    bool madeSwap = true;
    
    do{
        
        madeSwap = false;
        
        for(int i = 0; i < size - 1; i ++) {
        
            if(names[i] > names[i + 1]) {
                
                temp1 = names[i];
                names[i] = names [i + 1];
                names[i + 1] = temp1;
                
                temp2 = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp2;
                madeSwap = true;
            
            }
        
        }
        
    }while(madeSwap);
    
    
    long long int phNumber;
    
    for(int k = 0; k < 10; k ++) {
        
        phNumber = std::atoll(numbers[k].c_str());
        phoneNumbers[k] = phNumber;
        
    }
    
    std::cout << "\t  Ordered List" << std::endl;
    
    for(int i = 0; i < 10; i ++) {
        
        std::cout << names[i] << " - " << phoneNumbers[i] << std::endl;
        
    }
    
    std::cout << std::endl << std::endl;
    
}



