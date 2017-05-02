//
//  main.cpp
//  Ch 13 Ex 7
//
//  Created by Teran on 4/20/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


int main()
{
    std::string fileName, encrypted, buffer;
    std::cout << "Enter the file you wish to encrypt: ";
    std::cin >> fileName;
    
    std::cout << "Enter a name for the encrypted file: ";
    std::cin >> encrypted;
    
    std::fstream Stream(fileName, std::ios::in);
    
    std::fstream Encrypt(encrypted, std::ios::out);
    
    if (!Stream) {
        std::cout << "Error opening file\n";
        return 0;
    }
    while (std::getline(Stream, buffer)) {
        for (int i = 0; i < buffer.size(); i++) {
            buffer[i] = char(buffer[i] + 10);
        }
        Encrypt << buffer;
    }
    
    Stream.close();
    Encrypt.close();
    
    
    return 0;
}
