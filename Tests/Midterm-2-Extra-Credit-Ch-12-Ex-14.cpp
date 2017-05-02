//
//  main.cpp
//  Midterm_2_Chapter_12_Exercise_14_EC
//
//  Created by Teran on 4/6/17.
//  Copyright © 2017 MyApps. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


///Function Prototypes
std::string dollarFormatter(double);
double roundToHundredths(double);


int main() {
    
    double amount;
    std::string formattedAmount;
    
    ///Ask user for input
    std::cout << "Enter your amount:                        "; std::cin >> amount;
    std::cout << std::endl << std::endl;
    
    
    ///Check if user input is allowed
    while(amount < 0.0) {
        
        std::cout << "Please enter an appropriate amount:       "; std::cin >> amount;
        
    }
    
    
    ///Round amount entered
    amount = roundToHundredths(amount);
    
    
    ///Call formatting function and set formatted string equal to function return value
    formattedAmount = dollarFormatter(amount);
    
    
    ///Output formatted dollar amount to user
    std::cout << "Your correct amount is:                   " << formattedAmount << std::endl << std::endl;
    
    
    return 0;
}



///***********************************************************************************************************



double roundToHundredths(double x) {
    
    x *= 100;
    
    return floor(x + 0.5) / 100;
}



///***********************************************************************************************************



std::string dollarFormatter(double value) {
    
    
    std::string formattedAmount = std::to_string(value);
    
    
    long int p = formattedAmount.find('.');
    long int pos = p;
    
    formattedAmount = formattedAmount.substr(0, pos + 3);
    
    while(pos > 3) {
        
        pos -= 3;
        formattedAmount.insert(pos, ",");
        
    }
    
    
    formattedAmount.insert(0, "$");
    
    return formattedAmount;
}







