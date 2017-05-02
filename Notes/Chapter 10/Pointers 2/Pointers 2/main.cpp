//
//  main.cpp
//  Pointers 2
//
//  Created by Teran on 3/2/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    const int SIZE = 10;
    
    double nums[SIZE] = {12.9, 23.1, 12.2, 4.2, 5.4, 23.4, 2212.2, 122.5, 65.5, 79.8};
    
    double *doublePointer;
    
    doublePointer = nums;
    
    for(int i = 0; i < SIZE; i++) {
        
        cout << *(nums + i) << "  ";
        
    }
    
    cout << endl << endl;
    
    
    for(int i = 0; i < SIZE; i++) {
        
        cout << doublePointer[i] << "  ";
        
    }
    
    cout << endl << endl;
    
    return 0;
}
