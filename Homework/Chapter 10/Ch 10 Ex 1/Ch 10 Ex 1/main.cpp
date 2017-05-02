//
//  main.cpp
//  Ch 10 Ex 1
//
//  Created by Teran on 3/2/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

/**-----------------------Function Prototypes-----------------------**/

void sortScores(int *testScores, int size);
double averageTestScores(int *testScores, int size);
void printScores(int *testScores, int size);

/**-----------------------------------------------------------------**/

int main() {
    
    int *testScores;
    
    double average;
    
    int score;
    
    int size;
    
    
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    
    testScores = new int[size];
    
    
    std::cout << "Enter numbers for each element: " << std::endl << std::endl;
    
    
    for(int i = 0; i < size; i++) {
        
        std::cout << "Score for test " << i + 1 << ": ";
        std::cin >> score;
        
        while(score < 0) {
            
            std::cout << "ERROR. Enter a positive score for test " << i + 1 << ": ";
            std::cin >> score;
            
        }
        
        testScores[i] = score;
        
    }
    
    printScores(testScores, size);
    
    average = averageTestScores(testScores, size);
    
    sortScores(testScores, size);
    
    std::cout << "Average of the test scores: " << std::fixed << std::setprecision(2) << average << std::endl << std::endl;
    
    
    for(int i = 0; i < size; i++) {
        
        std::cout << testScores[i] << " ";
        
    }
    
    
    std::cout << std::endl << std::endl;
    
    
    return 0;
}

/**-----------------------Sort Test Scores-----------------------**/

void sortScores(int *testScores,int size) {
    
    int i, minIndex, minValue;
    
    
    for(i = 0; i < (size - 1); i++) {
        
        minIndex = i;
        minValue = testScores[i];
        
        for(int j = i + 1; j < size; j++ ) {
            
            if(testScores[j] < minValue) {
                
                minValue = testScores[j];
                minIndex = j;
                
            }
            
        }
        
        testScores[minIndex] = testScores[i];
        testScores[i] = minValue;
        
    }
    
    
    for(int i = 0; i < size; i ++) {
        
        std::cout << testScores[i] << " ";
        
    }
    
}

/**-----------------------Retrieve Averages-----------------------**/

double averageTestScores(int *testScores, int size) {
    
    int sum = 0;
    double average;
    int *current = testScores;
    
    
    for(int i = 0; i < size; i++) {
        
        sum += *current;
        
        current ++;
        
    }
    
    average = (double) sum / size;
    
    return average;
}

/**-----------------------Print Scores-----------------------**/

void printScores(int *testScores, int size) {
    
    int *current = testScores;
    
    for(int i = 0; i < size; i++) {
        
        std::cout << *current << " ";
        
        current ++;
        
    }
    
    std::cout << std::endl << std::endl;
    
}
