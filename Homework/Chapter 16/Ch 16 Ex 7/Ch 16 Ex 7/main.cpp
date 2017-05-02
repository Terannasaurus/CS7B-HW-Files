//
//  main.cpp
//  Ch 16 Ex 7
//
//  Created by Teran on 4/25/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <memory>

using namespace std;

struct IndexOutOfRangeException {
    
    const int index;
    IndexOutOfRangeException(int ix) : index(ix) {}
};


template <class T> class SimpleVector {
    
private:
    int pos = 0;
    T *aptr;
    int arraySize;
    
public:
    
    SimpleVector() {
        aptr = NULL;
        arraySize = 0;
    }
    SimpleVector(int size) {
        
        arraySize = size;
        aptr = new T[arraySize];
        
    }
    SimpleVector(const SimpleVector &);
    
    int size() const { return arraySize; }
    
    T &operator[](int);
    void print() const;
    
    void Push_Back(T value);
    void Pop_Back();
    
};


int main() {
    
    const int SIZE = 10;
    
    SimpleVector<int> vec1(SIZE);
    SimpleVector<double> vec2(SIZE);
    
    for (int i = 0; i < vec1.size(); i++) {
        
        vec1[i] = i + 2;
    }
    
    for (int i = 0; i < vec2.size(); i++) {
        
        vec2[i] = (i + 2) * 33.333333;
    }
    
    vec1.Push_Back(5);
    vec1.Push_Back(5);
    vec1.print();
    
    try {
        
        cout << "Vec1 Pop_Back " << endl;
        vec1.Pop_Back();
        
    } catch (char *exceptionString) {
        
        cout << exceptionString << endl;
        
    }
    
    vec1.Pop_Back();
    vec1.print();
    
    return 0;
}


//Copy Constructor
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj) {
    
    arraySize = obj.arraySize;
    aptr = new T[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        
        aptr[i] = obj[i];
        
    }
    
}

//Overloaded [] operator
template <class T>
T &SimpleVector<T>::operator[](int subscript) {
    
    if (subscript < 0 || subscript >= arraySize) {
        
        //throw IndexOutOfRangeException(subscript);
        cout << "ERROR: Subscript out of bounds\n";
    }
    
    pos = subscript;
    
    return &aptr[subscript];
}

//Prints all of the elements in the array
template <class T>
void SimpleVector<T>::print() const {
    
    for (int k = 0; k < arraySize; k++) {
        
        cout << aptr[k] << " " << endl;
        
    }
    
}

//Adds value to the end of the array
template <class T>
void SimpleVector<T>::Push_Back(T value) {
    
    T *temp = new T[arraySize + 1];
    
    for (int i = 0; i < arraySize; i++) {
        temp[i] = aptr[i];
    }
    
    temp[arraySize] = value;
    
    if (arraySize > 0) {
        
        delete [] temp;
        
    }
    
    aptr = temp;
    arraySize++;
    
}

//Removes the last element in the array
template <class T>
void SimpleVector<T>::Pop_Back() {
    
    aptr[pos - 1] = T();
    pos--;
    
}
