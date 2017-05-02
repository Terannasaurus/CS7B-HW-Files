//
//  NumDays.cpp
//  Ch 11 Ex 4
//
//  Created by Teran on 3/30/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "NumDays.h"
#include <iostream>
#include <iomanip>


NumDays::NumDays(int h) {
    
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




