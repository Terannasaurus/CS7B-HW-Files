//
//  main.cpp
//  Ch. 7 Exercise 16 and 17
//
//  Created by Teran on 2/16/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Coin.h"
#include <iomanip>

int main() {
    
    Coin savage, quarter, nickel, dime;
    
    int headsCounter = 0, tailsCounter = 0;
    int userBalance;
    
    const int Q_MAX = 25, N_MAX = 5, D_MAX = 10, B_MAX = 100;
    
    std::string coinSide;
    
    savage.coinFunc();
    
    for(int i = 0; i <= 20; i ++) {
        
        savage.toss();
        std::cout << savage.getSideUp() << std::endl;
        
        if(savage.getSideUp() == "heads") {
            
            headsCounter ++;
            
        } else if(savage.getSideUp() == "tails") {
            
            tailsCounter ++;
            
        }
        
    }
    
    std::cout << std::endl;
    std::cout << "The coin landed on heads " << headsCounter << " times." << std::endl;
    std::cout << "The coin landed on tails " << tailsCounter << " times." << std::endl << std::endl;
    
    std::cout << "Let's play the game." << std::endl << std::endl;
        
        while(userBalance < B_MAX) {
            
            quarter.toss();
            nickel.toss();
            dime.toss();
            
            
            if(quarter.getSideUp() == "heads") {
                
                userBalance = Q_MAX + userBalance;
                
            } else if(nickel.getSideUp() == "heads") {
                
                userBalance = N_MAX + userBalance;
                
            }   else if(dime.getSideUp() == "heads") {
                
                userBalance = D_MAX + userBalance;
                
            }
            
            
        }
    
        double balance = userBalance;
    
        if(userBalance == B_MAX) {
            
            std::cout << "You WON! Your balance was: $" << balance/100 << ".00"<< std::endl << std::endl;
            
        } else if (userBalance > B_MAX) {
            
            std::cout << "You LOST! Your balance was: $" << std::setprecision(4) << balance/100 << std::endl << std::endl;
            
        }
    
        

    
    return 0;
}
