//
//  main.cpp
//  Exercise 8
//
//  Created by Teran on 2/6/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>

using namespace std;

const int MAX_NUM = 12;

double rainFallArray[MAX_NUM];

string monthsArray[MAX_NUM] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


void getData() {
    
    double rainFallNum;
    
    cout << "\t2017 Rain Report for Dimsdale" << endl << endl;
    
    cout << "Enter the amount of rain for each month" << endl;
    
    for(int i = 0; i < MAX_NUM; i++) {
        
        cout << monthsArray[i] << ":   ";
        
        cin >> rainFallNum;
        
        rainFallArray[i] = rainFallNum;
        
        cout << endl;
        
    }
    
}


double totalRainfall() {
    
    double totalRain = 0;
    
    for(int i = 0; i < MAX_NUM; i++) {
        
        totalRain += rainFallArray[i];
        
        
    }
    
    return totalRain + 0.00;
}


double averageRainfall() {
    
    double averageRain;
    
    double sum = 0;
    
    for(int i = 0; i < MAX_NUM; i++) {
        
        sum += rainFallArray[i];
        
    }
    
    averageRain = sum/MAX_NUM;
    
    return averageRain + 0.00;
}


double driestMonth() {
    
    double dryMonth;
    
    double lowestNum = rainFallArray[0];
    
    for(int i = 0; i < MAX_NUM; i++) {
    
        if(rainFallArray[i] < lowestNum) {
            
            lowestNum = rainFallArray[i];
            
        }
    
    }
    
    dryMonth = lowestNum;
    
    return dryMonth + 0.00;
}


double wettestMonth() {
    
    double wetMonth;
    
    double highestNum = rainFallArray[0];
    
    for(int i = 0; i < MAX_NUM; i++) {
        
        if(rainFallArray[i] > highestNum) {
            
            highestNum = rainFallArray[i];
            
        }
        
    }
    
    wetMonth = highestNum;
    
    return wetMonth + 0.00;
}


int main() {
    
    getData();
    
    double total = totalRainfall();
    double average = averageRainfall();
    double driest = driestMonth();
    double wettest = wettestMonth();
    int dry = 0, wet = 0;


    for(int i = 0; i < MAX_NUM; i++) {
        
        if(driest == rainFallArray[i]) {
            
            dry = i;
            break;
        }
        
    }
    
    for(int i = 0; i < MAX_NUM; i++) {
        
        if(wettest == rainFallArray[i]) {
            
            wet = i;
            break;
        }
        
    }
    
    cout << "Total rainfall:             " << setprecision(4) << total << " inches" << endl;
    cout << "Average monthly rainfall:   " << setprecision(4) << average << " inches" << endl;
    cout << "The least rain fell in " << monthsArray[dry] << " with " <<  setprecision(4) <<driest << " inches of rain." << endl;
    cout << "The most rain fell in " << monthsArray[wet] << " with " <<  setprecision(4) <<wettest << " inches of rain." << endl;

    return 0;
}




