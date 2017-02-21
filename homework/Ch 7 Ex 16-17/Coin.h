//
//  Coin.h
//  Ch. 7 Exercise 16 and 17
//
//  Created by Teran on 2/16/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef Coin_h
#define Coin_h

#include <stdio.h>
#include <iostream>

class Coin {
    
public:
    
    void coinFunc();
    void toss();
    std::string getSideUp();
    
private:
    
    std::string sideUp;
    
};

#endif /* Coin_h */
