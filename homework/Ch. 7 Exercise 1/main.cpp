//
//  main.cpp
//  Exercise 1
//
//  Created by Teran on 2/9/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Date.h"

int main() {
    
    Date date;
    
    int day, year;
    std::string month;
    
    date.dateFormatter(day, year, month);
    
    return 0;
}
