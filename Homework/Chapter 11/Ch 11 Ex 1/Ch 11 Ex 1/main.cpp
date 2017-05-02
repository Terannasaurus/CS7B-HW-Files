//
//  main.cpp
//  Ch 11 Ex 1
//
//  Created by Teran on 3/16/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include "Numbers.h"

int main() {

    int tempNum;

    Numbers num1;

    std::cout << "Enter a number between 0 - 9,999:    ";
    std::cin >> tempNum;
    std::cout << std::endl;

    num1.setNum(tempNum);

    int number = num1.getNum();

    num1.print();





    return 0;
}
