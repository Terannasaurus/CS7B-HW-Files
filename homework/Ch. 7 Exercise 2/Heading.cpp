//
//  Heading.cpp
//  Exercise 2
//
//  Created by Teran on 2/9/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Heading.h"


bool Heading::setCompName(std::string compName) {
    
    bool emptyOrNot = true;
    
    std::cout << "Enter your company name: ";
    
    std::getline(std::cin, compName);
    
    
    if(compName != "") {
        
        companyName = compName;
        
    } else {
        
        emptyOrNot = false;
        
        companyName = "ABC Industries";
        
    }
    
    
    
    return emptyOrNot;
}


bool Heading::setRepName(std::string repName) {
    
    bool emptyOrNot = true;
    
    std::cout << "Enter your report name: ";
    
    std::getline(std::cin, repName);
    
    
    if(repName != "") {
        
        reportName = repName;
        
    } else {
        
        emptyOrNot = false;
        
        reportName = "Report";
        
    }
    
    
    return emptyOrNot;
}


std::string Heading::getCompName() {
    
    return companyName;
}


std::string Heading::getRepName() {
    
    return reportName;
}









