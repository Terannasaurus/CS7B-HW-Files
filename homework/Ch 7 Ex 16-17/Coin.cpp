//
//  Coin.cpp
//  Ch. 7 Exercise 16 and 17
//
//  Created by Teran on 2/16/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "Coin.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Coin::coinFunc() {
    
    std::string coinSide[2] = {"heads", "tails"};
    
    srand(time(NULL));
    
    int side = rand() % 2;
    
    sideUp = coinSide[side];

}


void Coin::toss() {
    
    std::string coinSide[2] = {"heads", "tails"};
    
    int side = rand() % 2;
    
    sideUp = coinSide[side];
    
}


std::string Coin::getSideUp() {
    
    return sideUp;
}


