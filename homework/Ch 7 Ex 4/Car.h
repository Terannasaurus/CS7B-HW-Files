//
//  Car.h
//  Exercise 4
//
//  Created by Teran on 2/14/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef Car_h
#define Car_h

#include <stdio.h>
#include <string>

class Car
{
public:
    
    void carFunc(int, std::string);
    void carAccel();
    void carBrake();
    
    //Accessors
    int getYear() const;
    std::string getMake() const;
    int getSpeed() const;
    
    //Mutators
    void setYear(int);
    void setMake(std::string);
    void setSpeed(int);
    
private:
    
    int year;
    std::string make;
    int speed;
    
};

#endif /* Car_h */
