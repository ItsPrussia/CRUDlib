#ifndef _create_h
#define _create_h

#include <iostream>
#include <fstream>
#include <string>

void create(std::string gun, unsigned int year) {
    std::fstream file("./database.txt");

    if (file.is_open()) {
        file << "--------------------"<< '\n';
        file << "Gun's name: " << gun << '\n';
        file << "Gun's year: " << year << '\n';
        file << "--------------------"<< '\n';
    } else {
        std::cout << "Unable to open the file\n";
    }
    
    file.close();
}

#endif