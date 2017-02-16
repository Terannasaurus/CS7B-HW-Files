//
//  main.cpp
//  Exercise 6
//
//  Created by Teran on 2/5/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;

const int NUM_DAYS = 30;
const int NUM_MONTHS = 3;

typedef char weather[NUM_MONTHS][NUM_DAYS];


void fillWeatherArray(weather array) {
    
    ifstream readData;
    
    readData.open("RainOrShine.dat");
    
    if(!readData) {
        
        cout << "Error occured opening file" << endl;
        
    } else {
        
        for(int i = 0; i < NUM_MONTHS; i++) {
            
            for(int j = 0; j < NUM_DAYS; j++) {
                
                readData >> array[i][j];

            }
            
        }
        
        readData.close();
        
    }
}

void showWeatherArray(weather array) {
    
    int cCounter = 0, rCounter = 0, sCounter = 0, cTotal = 0, rTotal = 0, sTotal = 0;
    
    int cNum = 0, rNum = 0, sNum = 0;
    
    cout << "   	Summer Weather Report 	  " << endl << endl;
    cout << "Month	 Rainy   Cloudy   Sunny" << endl;
    cout << "-------------------------------" << endl;
    cout << fixed << setprecision(2);
    
    
    for(int i = 0; i < NUM_DAYS; i++) {
        
        if(array[0][i] == 'C') {
            cCounter++;
            cTotal++;
            cNum = cCounter;
            
            
            
        } else if(array[0][i] == 'R') {
            rCounter++;
            rTotal++;
            rNum = rCounter;
            
            
            
        } else if(array[0][i] == 'S') {
            sCounter++;
            sTotal++;
            sNum = sCounter;
            
            
        }
        
    }
    
    cCounter = 0;
    rCounter = 0;
    sCounter = 0;

    cout << "June  " << "   " << cNum << "       " << rNum << "       " << sNum << endl;
    
    cNum = 0;
    rNum = 0;
    sNum = 0;
    
    for(int j = 0; j < NUM_DAYS; j++) {
        
        if(array[1][j] == 'C') {
            cCounter++;
            cTotal++;
            cNum = cCounter;
            
            
        } else if(array[1][j] == 'R') {
            rCounter++;
            rTotal++;
            rNum = rCounter;
            
        } else if(array[1][j] == 'S') {
            sCounter++;
            sTotal++;
            sNum = sCounter;
            
        }
        
    }
    
    cCounter = 0;
    rCounter = 0;
    sCounter = 0;
    
    cout << "July  " << "   " << cNum << "      " << rNum << "       " << sNum << endl;
    
    cNum = 0;
    rNum = 0;
    sNum = 0;
    
    for(int k = 0; k < NUM_DAYS; k++) {
        
        if(array[2][k] == 'C') {
            cCounter++;
            cNum = cCounter;
            cTotal++;
            
            
            
        } else if(array[2][k] == 'R') {
            rCounter++;
            rTotal++;
            rNum = rCounter;
            
            
            
        } else if(array[2][k] == 'S') {
            sCounter++;
            sTotal++;
            sNum = sCounter;
            
            
        }
        
    }
    
    cCounter = 0;
    rCounter = 0;
    sCounter = 0;
    
    cout << "August" << "   " << cNum << "       " << rNum << "       " << sNum << endl;
    cout << "-------------------------------" << endl;
    cout << "TOTAL " << "   " << cTotal << "      " << rTotal << "      " << sTotal << endl;
    
}

int main() {
    
    char weatherArr[NUM_MONTHS][NUM_DAYS];
    
    fillWeatherArray(weatherArr);
    
    showWeatherArray(weatherArr);
    
    
    return 0;
}

