#ifndef _read_h
#define _read_h

#include <iostream>
#include <fstream>
#include <string>

void read() {
    std::fstream file("./database.txt");
    std::string tmp;

    while (!file.eof()) {
        file >> tmp;
        std::cout << tmp;
        tmp = "";

        if (file.eof()) {
            break;
        }
    }
}

#endif