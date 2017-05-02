//
//  Batter.cpp
//  Ch 9 Ex 4
//
//  Created by Teran on 2/21/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "Batter.h"
#include <iostream>


void Batter::sortData(std::string players[], double averages[], int size) {
    
    size = SIZE;
    
    double minValue;
    int minIndex, nameIndex;
    
    std::string tempName;
    
    for(int i = 0; i < size - 1; i ++) {
        
        minValue = averages[i];
        tempName = players[i];
        minIndex = i;
        nameIndex = i;
        
        for(int j = i + 1; j < size; j ++) {
            
            if(averages[j] > minValue) {
                
                minValue = averages[j];
                tempName = players[j];
                minIndex = j;
                nameIndex = j;
                
            }
            
        }
        
        averages[minIndex] = averages[i];
        averages[i] = minValue;
        players[nameIndex] = players[i];
        players[i] = tempName;
        
    }
    
}

void Batter::displayData(std::string players[], double averages[], int size) {
    
    size = SIZE;
    
    std::cout << "Here's a list of players and their averages:" << std::endl << std::endl;
    
    for(int i = 0; i < size; i ++) {
        
        std::cout << players[i] << ":   " << averages[i] << std::endl;
        
    }
    
    std::cout << std::endl << std::endl;
    
}
















