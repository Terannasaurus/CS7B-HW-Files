//
//  Date.cpp
//  Exercise 1
//
//  Created by Teran on 2/9/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Date.h"

void Date::dateFormatter(int day, int year, std::string month) {
    
    int wrongDay = 31;
    int monthNum = 0;
    std::string monthsArray[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    std::string specialMonthsArray[5] = {"February", "April", "June", "September", "November"};
    
    std::cout << "Enter the month: ";
    std::cin >> month;
    std::cout << std::endl;
    
    
    std::cout << "Enter the day: ";
    std::cin >> day;
    std::cout << std::endl;
    
    
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << std::endl;
    
    
    if((month != "") && ((day > 0) && (day <= 31)) && (year >= 0)) {
        
        days = day;
        
        years = year;
        
        months = month;
        
        for(int i = 0; i < 12; i++) {
            
            if(month == specialMonthsArray[i] && day == wrongDay) {
                
                days = 1;
                
                years = 2001;
                
                months = "1";
                
                break;
                
            } else if(month == monthsArray[i]) {
                
                monthNum = i + 1;
                
                break;
                
            }
            
        }
        
        /*std::cout << monthNum << "/" << days << "/" << years << std::endl;
        std::cout << months << " " << days << ", " << years << std::endl;
        std::cout << days << " " << months << " " << years << std::endl << std::endl;
        */
    } else {
        
        days = 1;
        
        years = 2001;
        
        monthNum = 1;
        
        months = "January";
        
    }
    std::cout << std::endl;
    std::cout << monthNum << "/" << days << "/" << years << std::endl << std::endl;
    std::cout << months << " " << days << ", " << years << std::endl << std::endl;
    std::cout << days << " " << months << " " << years << std::endl << std::endl;
    
}

