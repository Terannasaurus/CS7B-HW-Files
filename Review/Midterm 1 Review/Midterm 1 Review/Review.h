//
//  Review.h
//  Midterm 1 Review
//
//  Created by Teran on 3/8/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#ifndef Review_h
#define Review_h

#include <stdio.h>
#include <iostream>

class Review {
    
private:
    
    double length;
    double width;
    double height;
    
public:
    
    /*---CONSTRUCTORS---*/
    Review();
    
    /*----DESTRUCTORS----*/
    ~Review();
    
    /*-----MUTATORS-----*/
    void setLength(double);
    void setWidth(double);
    void setHeight(double);
    
    /*-----ACCESSORS-----*/
    double getLength();
    double getWidth();
    double getHeight();
    
    /*-MEMBER FUNCTIONS-*/
    double volume();
    double surfaceArea();
    
    int linearSearch(int[], int, int);
    int binarySearch(int[], int, int);
    
    void bubbleSort(int[], int);
    void selectionSort(int[], int);
    
};

#endif /* Review_h */
