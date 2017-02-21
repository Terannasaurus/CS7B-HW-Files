//
//  main.cpp
//  Exercise 2
//
//  Created by Teran on 2/9/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Heading.h"

int main() {
    
    Heading header;
    
    
    std::string company;
    std::string report;
    
    
    header.setCompName(company);
    header.setRepName(report);
    
    company = header.getCompName();
    report = header.getRepName();
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << company << std::endl;
    std::cout << report << std::endl;
    
    std::cout << std::endl;
    for(int i = 0; i < 100; i ++) {
        
        std::cout << "*";
        
    }
    std::cout << std::endl;
    for(int i = 0; i < (100 - company.length())/2; i++) {
        
        std::cout << " ";
        
    }
    std::cout << company << std::endl;
    for(int i = 0; i < (100 - report.length())/2; i++) {
        
        std::cout << " ";
        
    }
    std::cout << report << std::endl;
    for(int i = 0; i < 100; i ++) {
        
        std::cout << "*";
        
    }
    std::cout << std::endl << std::endl;
    
    return 0;
}
