//
//  main.cpp
//  Ch 12 Ex 2
//
//  Created by Brandon Teran on 4/16/17.
//  Copyright © 2017 Brandon Teran. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>


void display(char[]);

using namespace std;

int main() {
    
    const int len = 50;
    char str[len];
    
    cout << "Enter a sentence:      ";
    cin.getline(str, len);
    
    display(str);
    
    return 0;
}

void display(char *d) {
    
    int words = 1;
    int counter = 0;
    double avg = 0;
    
    strlen(d);
    
    unsigned long n = strlen(d);
    
    for (int i = 0; i < n; i++) {
        
        if ((int)d[i] == 32) {
            
            words++;
            
        } else {
            
            counter++;
        
        }
        
    }
    
    avg = counter/ (double)words;
    
    cout << "Number of words in the string: " << words << endl << endl;
    
    cout << "Average number of letters in each word: " << avg << endl;
    
    
}








