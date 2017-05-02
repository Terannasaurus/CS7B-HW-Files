//
//  DayOfYear.cpp
//  Ch 11 Ex 2 and 3
//
//  Created by Teran on 3/21/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "DayOfYear.h"
#include <iostream>
#include <iomanip>


const std::string DayOfYear::months[] = {"January", "February", "March", "April", "May", "June", "July",
                                         "August", "September", "October", "November", "December"};

const int DayOfYear::monthMax[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

const int DayOfYear::monthsRange[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


DayOfYear::DayOfYear(std::string m, int d) {
    
    int temp;
    
    if((d >= 1) || (d <= 31)) {
        
        for(int i = 0; i < MAX_NUM; i++) {
            
            if(m == months[i]) {
                
                month = months[i];
                temp = i;
                break;
            }
        }
        
        day = d;
        
        if(day > monthsRange[temp]) {
            
            std::cout << "ERROR. The day you entered is not in the range of this month." << std::endl;
            
        } else {
            
            std::cout << "You entered:     " << month << " " << day << std::endl;
            
        }
        
    }
    
    
    
    
    
    
}


void DayOfYear::setDay(int d) {
    
    day = d;
    
}

int DayOfYear::getDay() {
    
    return day;
    
}

void DayOfYear::print(int d) {
    
    int temp = 0;
    int correctDay = 0;
    std::string correctMonth = "";
    
    
    if((d < 0) || (d > 365)) {
        
        std::cout << "kys..." << std::endl << std::endl;
        
    } else {
        
        if(d <= 31) {
            
            correctMonth = months[0];
            correctDay = d;
            
            std::cout << "The correct date is:    " << correctMonth << " " << correctDay << std::endl << std::endl;
            
        } else {
        
            for(int i = 0; i < MAX_NUM; i++) {
                
                if(((monthMax[i] - d) >= 0) && ((monthMax[i] - d) < 31)) {
                    
                    temp = i;
                    correctMonth = months[temp];
                    correctDay = 31-(monthMax[temp] - d);
                    
                }
                
            }
            
            std::cout << "The correct date is:    " << correctMonth << " " << correctDay << std::endl << std::endl;
        
        }
        
    }
    
}






