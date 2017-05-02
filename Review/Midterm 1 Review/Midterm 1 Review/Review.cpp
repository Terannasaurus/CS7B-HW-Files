//
//  Review.cpp
//  Midterm 1 Review
//
//  Created by Teran on 3/8/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "Review.h"
#include <iostream>
#include <stdio.h>


/*-------CONSTRUCTOR-------*/

Review::Review() {
    
    length = 0;
    width = 0;
    height = 0;
    
}

/*--------MEMBER FUNCTIONS--------*/

double Review::volume() {
    
    double l = length;
    double w = width;
    double h = height;
    
    double vol = l * w * h;
    
    return vol;
}

double Review::surfaceArea() {
    
    double l = length;
    double w = width;
    double h = height;
    
    double surfArea = ((w * l) + (h * l) + (h * w)) * 2;
    
    return surfArea;
}

/*----------MUTATORS----------*/

void Review::setLength(double l) {
    
    length = l;
    
}

void Review::setWidth(double w) {
    
    width = w;
    
}

void Review::setHeight(double h) {
    
    height = h;
    
}

/*-------ACCESSORS-------*/

double Review::getLength() {
    
    return length;
}

double Review::getWidth() {
    
    return width;
}

double Review::getHeight() {
    
    return height;
}

/*-------DESTRUCTOR-------*/

Review::~Review() {
    
    length = 0;
    width = 0;
    height = 0;
    
}


