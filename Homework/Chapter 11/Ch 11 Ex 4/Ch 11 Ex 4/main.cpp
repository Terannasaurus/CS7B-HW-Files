//
//  main.cpp
//  Ch 11 Ex 4
//
//  Created by Teran on 3/30/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "NumDays.h"

int main() {
    
    NumDays emp1(24), emp2(34);
    
    
    std::cout << "------------------------------Employee #1------------------------------" << std::endl << std::endl;
    emp1.convertHours(emp1.getHours());
    std::cout << "Employee #1:          Hours:     " << emp1.getHours() << "     Days:     " << emp1.getDays() << std::endl;
    
    emp1++;
    emp1.convertHours(emp1.getHours());
    std::cout << "Employee #1:          Hours:     " << emp1.getHours() << "     Days:     " << emp1.getDays() << std::endl;
    
    emp1++;
    emp1.convertHours(emp1.getHours());
    std::cout << "Employee #1:          Hours:     " << emp1.getHours() << "     Days:     " << emp1.getDays() << std::endl;

    
    emp1--;
    emp1.convertHours(emp1.getHours());
    std::cout << "Employee #1:          Hours:     " << emp1.getHours() << "     Days:     " << emp1.getDays() << std::endl;
    
    emp1--;
    emp1.convertHours(emp1.getHours());
    std::cout << "Employee #1:          Hours:     " << emp1.getHours() << "     Days:     " << emp1.getDays() << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    
    
    
    std::cout << "------------------------------Employee #2------------------------------" << std::endl << std::endl;
    emp1.convertHours(emp1.getHours());
    std::cout << "Employee #2:          Hours:     " << emp2.getHours() << "     Days:     " << emp2.getDays() << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    
    
    
    NumDays sum = emp1 + emp2;
    
    
    std::cout << "-----------------------Employee #1 + Employee #2-----------------------" << std::endl << std::endl;
    sum.convertHours(sum.getHours());
    std::cout << "Total Hours:          Hours:     " << sum.getHours() << "     Days:     " << sum.getDays() << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    
    
    
    NumDays diff = emp1 - emp2;
    
    
    std::cout << "-----------------------Employee #1 - Employee #2-----------------------" << std::endl << std::endl;
    diff.convertHours(diff.getHours());
    std::cout << "Total Hours:          Hours:     " << diff.getHours() << "     Days:     " << diff.getDays() << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    
    
    
    return 0;
    
}
