//
//  Heading.h
//  Exercise 2
//
//  Created by Teran on 2/9/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef Heading_h
#define Heading_h

#include <stdio.h>
#include <string>

class Heading {
    
public:
    
    bool setCompName(std::string);
    bool setRepName(std::string);
    
    std::string getCompName();
    std::string getRepName();
    
private:
    
    std::string companyName;
    std::string reportName;
    
};

#endif /* Heading_h */
