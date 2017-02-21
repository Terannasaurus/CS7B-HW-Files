//
//  Date.h
//  Exercise 1
//
//  Created by Teran on 2/9/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef Date_h
#define Date_h
#include <stdio.h>
#include <iostream>


class Date {
    
public:
    
    void dateFormatter(int, int, std::string);
    
private:
    
    std::string months;
    int days;
    int years;
    
};

#endif /* Date_h */
