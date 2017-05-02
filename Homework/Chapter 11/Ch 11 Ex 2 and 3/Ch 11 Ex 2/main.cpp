//
//  main.cpp
//  Ch 11 Ex 2 and 3
//
//  Created by Teran on 3/21/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "DayOfYear.h"



int main() {
    
    DayOfYear day;
    
    
    int numDay;
    int theDay;
    
    int objDay;
    std::string objMonth;
    
    std::cout << "Enter a number of the year between 1-365:      "; std::cin >> numDay;
    std::cout << std::endl << std::endl;
    
    day.setDay(numDay);
    
    day++;
    day.print(day.getDay());
    day++;
    day.print(day.getDay());
    day++;
    day.print(day.getDay());
    day--;
    day.print(day.getDay());
    day--;
    day.print(day.getDay());
    day--;
    day.print(day.getDay());
    
    
    std::cout << "Enter a month:                                 "; std::cin >> objMonth;
    std::cout << "Enter a day between 1 - 31:                    "; std::cin >> objDay;
    std::cout << std::endl << std::endl;
    
    DayOfYear(objMonth, objDay);
    
    
    
    
    
    return 0;
}
