//
//  main.cpp
//  Exercise 4
//
//  Created by Teran on 2/14/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Car.h"

int main() {
    
    int carYear;
    std::string carMake;
    int carSpeed;
    
    Car myCar;
    
    myCar.getSpeed();
    myCar.getMake();
    myCar.getSpeed();
    myCar.setYear(carYear);
    myCar.setMake(carMake);
    myCar.setSpeed(carSpeed);
    myCar.carFunc(carYear, carMake);
    
    
    std::cout << std::endl;
    std::cout << "Your car will now accelerate." << std::endl << std::endl;
    myCar.carAccel();
    
    
    std::cout << std::endl;
    std::cout << "Your car will now slow down." << std::endl << std::endl;
    myCar.carBrake();
    
    return 0;
}
