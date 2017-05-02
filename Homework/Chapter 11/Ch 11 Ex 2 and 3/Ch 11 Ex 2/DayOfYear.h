//
//  DayOfYear.h
//  Ch 11 Ex 2 and 3
//
//  Created by Teran on 3/21/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef DayOfYear_h
#define DayOfYear_h

#include <stdio.h>
#include <iostream>

class DayOfYear {
    
private:
    
    int day;
    std::string month;
    
public:
    
    DayOfYear() {
        
        month = months[0];
        day = 1;
    }
    
    DayOfYear(std::string, int);
    
    DayOfYear operator++() {
        
        DayOfYear temp = *this;
        
        if(day == 365) {
            
            ++day;
            day = 1;
            
        } else {
            
            ++day;
        }
        
        return temp;
    }
    
    
    DayOfYear operator++(int d) {
        
        if(day == 365) {
            
            this->day++;
            day = 1;
            
        } else {
            
            this->day++;
        }
        
        return *this;
    }
    
    
    DayOfYear operator--() {
        
        DayOfYear temp = *this;
        
        if(day == 365) {
            
            --day;
            day = 1;
            
        } else {
            
            --day;
        }
        
        return temp;
    }
    
    
    DayOfYear operator--(int d) {
        
        if(day == 1) {
            
            this->day--;
            day = 365;
            
        } else {
            
            this->day--;
        }
        
        return *this;
    }
    
    static const int MAX_NUM = 12;
    static const int monthMax[MAX_NUM];
    static const int monthsRange[MAX_NUM];
    static const std::string months[MAX_NUM];
    
    int dayNum;
    
    void setDay(int);
    int getDay();
    
    void print(int);
    
};

#endif /* DayOfYear_h */
