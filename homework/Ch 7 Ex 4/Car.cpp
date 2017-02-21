//
//  Car.cpp
//  Exercise 4
//
//  Created by Teran on 2/14/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Car.h"


void Car::carFunc(int carYear, std::string carMake) {
    
    carYear = year;
    
    carMake = make;
    
    int carSpeed;
    
    std::cout << "Enter your car's current speed: ";
    
    std::cin >> carSpeed;
    
    std::cout << std::endl << std::endl;
    
    speed = carSpeed;
    
}


void Car::carAccel() {
    
    if(speed >= 0) {
        
        for(int i = 1; i <= 5; i++) {
            
            speed = speed + (5);
            
            std::cout << "Current speed is: " << speed << " mph." << std::endl;
        }
        
    } else {
        
        std::cout << "Your speed value sucks" << std::endl;
        
    }
    
}


void Car::carBrake() {
    
    if(speed >= 0) {
        
        for(int i = 1; i <= 5; i++) {
            
            speed = speed - (5);
            
            std::cout << "Current speed is: " << speed << " mph." << std::endl;
            
            if(speed >= 0 && speed <= 5) {
                
                std::cout << "Your car has stopped." << std::endl;
                
                break;
            }
        }
        
    } else {
        
        std::cout << "Your speed value sucks" << std::endl;
        
    }
    
}


int Car::getYear() const {
    
    return year;
}


std::string Car::getMake() const {
    
    return make;
}


int Car::getSpeed() const {
    
    return speed;
}


void Car::setYear(int carYear) {
    
    year = carYear;
}


void Car::setMake(std::string carMake) {
    
    make = carMake;
}


void Car::setSpeed(int carSpeed) {
    
    speed = carSpeed;
}




