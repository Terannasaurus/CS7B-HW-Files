//
//  main.cpp
//  Exercise 7
//
//  Created by Teran on 2/5/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    
    const int MAX_DIGITS = 5;
    
    
    int playerNum;
    int counter = 0;
    
    
    int winningDigits[MAX_DIGITS] = {};
    int player[MAX_DIGITS] = {};
    
    
    cout << "Enter your 5 lottery numbers: ";
    
    //User enters numbers
    for(int i = 0; i < MAX_DIGITS; i++) {
    
        cin >> playerNum;
        player[i] = playerNum;
        cout << " ";
        
    }
    
    
    //Array of random numbers is generated
    srand(time(NULL));
    for(int j = 0; j < MAX_DIGITS; j++) {
        
        winningDigits[j] = rand() % 9;
        
    }
    
    
    //Array elements are compared and counter is adds up matches
    for(int k = 0; k < MAX_DIGITS; k++) {
        
        if(winningDigits[k] == player[k]){
            
            counter++;
            
        }
        
    }
    

    
    cout << endl << endl << "Winning Numbers:    ";
    for(int w = 0; w < MAX_DIGITS; w++) {
        
        cout << winningDigits[w] << " ";
        
    }
    
    
    
    cout << endl << endl;
    cout << "Your Numbers:       ";
    for(int y = 0; y < MAX_DIGITS; y ++) {
        
        cout << player[y] << " ";
        
    }
    
    
    
    cout << endl << endl;
    if (counter == 1) {
        
        cout << "You have " << counter << " matched number" << endl;
    
    } else {
        
        cout << "You have " << counter << " matched numbers" << endl;
        
    }
    
    
    
    cout << endl;
    
    
    return 0;
}
