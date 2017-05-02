//
//  NumDays.h
//  Ch 11 Ex 4
//
//  Created by Teran on 3/30/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef NumDays_h
#define NumDays_h

#include <stdio.h>
#include <iostream>
#include <iomanip>

class NumDays {
    
private:
    
    int hours;
    double days;
    
public:
    
    NumDays() {
        hours = 8;
    }
    
    
    NumDays(int);
    
    
    void setHours(int h) {hours = h;}
    int getHours() {return hours;}
    
    
    void setDays(double d) {days = d;}
    double getDays() {return days;}
    
    
    void convertHours(int h) {
        
        if(h < 0) {
            
            hours = h * (-1);
            
            double fullDay = 8.00;
            
            double conversionNum = hours/fullDay;
            
            days = conversionNum;
            
        } else {
            
            double fullDay = 8.00;
            
            hours = h;
            
            double conversionNum = hours/fullDay;
            
            days = conversionNum;
            
        }
        
    }
    
    
    NumDays operator++() {
        
        NumDays temp = *this;
        
        ++hours;
        
        return temp;
    }
    
    
    NumDays operator++(int h) {
        
        this->hours++;
        
        return *this;
    }
    
    
    NumDays operator--() {
        
        NumDays temp = *this;
        
        --hours;
        
        return temp;
    }
    
    
    NumDays operator--(int h) {
        
        this->hours--;
        
        return *this;
    }
    
    
    friend NumDays operator+(const NumDays &emp1, const NumDays &emp2) {
        
        
        return NumDays(emp1.hours + emp2.hours);
    }
    
    
    friend NumDays operator-(const NumDays &emp1, const NumDays &emp2) {
        
        
        return NumDays(emp1.hours - emp2.hours);
    }
    
    
};

#endif /* NumDays_h */
