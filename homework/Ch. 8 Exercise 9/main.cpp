//
//  main.cpp
//  Exercise 9
//
//  Created by Teran on 2/6/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int MAX_NUM = 3;
const int MAX_COLUMN = 3;


bool isMagicSquare(int loShu[MAX_NUM][MAX_COLUMN]) {
    
    int i, j;
    
    cout << "Enter 9 numbers to fill up the Lo Shu Magic Square:" << endl;
    
    for(i = 0; i < MAX_NUM; i++) {
        
        for(j = 0; j < MAX_COLUMN; j++){
            
            cin >> loShu[i][j];
            
        }
        
    }
    
    for(i = 0; i < MAX_NUM; i++) {
        
        if((loShu[i][0] + loShu[i][1] + loShu[i][2] != 15) && (loShu[0][i] + loShu[1][i] + loShu[2][i] != 15)) {
            
            
            cout << "This is a NOOOOOT Lo Shu Magic Square!" << endl;
            return false;
            
        }
        
    }
    
    if((loShu[0][0] + loShu[1][1] + loShu[2][2] != 15) && (loShu[2][0] + loShu[1][1] + loShu[0][2] != 15)) {
        
        return false;
        
    }
    
    cout << "This is a Lo Shu Magic Square!" << endl;
    
    
    return true;
}



int main() {
    
    int inputArray[MAX_NUM][MAX_COLUMN];
    
    isMagicSquare(inputArray);
    
    
    
    return 0;
}
