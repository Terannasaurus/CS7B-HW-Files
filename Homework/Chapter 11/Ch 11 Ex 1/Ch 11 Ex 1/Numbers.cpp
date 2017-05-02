//
//  Numbers.cpp
//  Ch 11 Ex 1
//
//  Created by Teran on 3/16/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include "Numbers.h"

const std::string Numbers::lessThan20[] = {"zero", "one", "two", "three", "four", "five", "six", "seven",
                                           "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
                                           "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};


const std::string Numbers::ten[] = {"twenty", "thirty", "fourty", "fifty",
                                    "sixty", "seventy", "eighty", "ninety"};


const std::string Numbers::hundos = "hundred";
const std::string Numbers::thousos = "thousand";


void Numbers::setNum(int n) {

    number = n;

}


int Numbers::getNum() {

    return number;
}


void Numbers::print() {

    std::string wordNum, strOnes, strTens, strHundreds, strThousands;
    int thousands, hundreds, tens, ones, temp;

    if((number >= 0) && (number < 10000)) {

        temp = number;

        ones = number % 10;
        temp /= 10;
        //std::cout << number << std::endl;

        tens = number % 10;
        temp /= 10;
        //std::cout << number << std::endl;

        hundreds = number % 10;
        temp /= 10;
        //std::cout << number << std::endl;

        thousands = number % 10;
        temp /= 10;
        //std::cout << number << std::endl;


        if(number < 20) {

            std::cout << lessThan20[number] << std::endl << std::endl;

        } else if((number >= 20) && (number < 100)) {

            if(ones != 0) {

                std::cout << "test" << std::endl << std::endl;

            } else {

                std::cout << ten[tens - 1] << std::endl << std::endl;
            }

        } else if((number >= 100) && (number < 1000)) {



        } else if(number >= 1000) {



        }


    } else {

        std::cout << "Okay like nigga it ain't gay to hold your homie dick what if the nigga tired of pickin up all that weight like it's 24 hours in a day and niggas ain't Hercules" << std::endl << std::endl;

    }

}
