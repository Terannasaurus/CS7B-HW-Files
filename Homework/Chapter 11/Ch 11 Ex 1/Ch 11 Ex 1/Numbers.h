//
//  Numbers.h
//  Ch 11 Ex 1
//
//  Created by Teran on 3/16/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef Numbers_h
#define Numbers_h

#include <stdio.h>
#include <iostream>

class Numbers {
    
private:
    
    int number;
    
public:
    
    Numbers() { number = 0; }
    Numbers(int);
    
    const static std::string lessThan20[];
    const static std::string ten[];
    const static std::string hundos;
    const static std::string thousos;
    
    void setNum(int);
    int getNum();
    void print();
    
};

#endif /* Numbers_h */
