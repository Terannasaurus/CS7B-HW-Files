//
//  main.cpp
//  Ch 9 Ex 4
//
//  Created by Teran on 2/21/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <array>
#include <iomanip>
#include <string>
#include <cmath>
#include "Batter.h"


int main() {
    
    std::string playerNames[12] = {"Brandon", "Ivan", "Chase", "Patrick", "Andrew", "Cesar", "Mauricio", "Matt", "James", "Bob", "Max", "Fred"};
    
    double averages[12] = {12.3, 6.4, 9.7, 11.4, 7.4, 9.2, 12.1, 3.2, 5.1, 7.2, 7.1, 8.5};
    
    Batter stats;
    
    stats.displayData(playerNames, averages, stats.SIZE);
    
    stats.sortData(playerNames, averages, stats.SIZE);
    
    stats.displayData(playerNames, averages, stats.SIZE);
    
    
    
    return 0;
}





