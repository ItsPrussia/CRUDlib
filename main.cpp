#include <iostream>
#include <string>

#include "include/create.h"
#include "include/read.h"
#include "include/update.h"
#include "include/delete.h"

int main(int argc, char* argv[]) {
    while (true) {

        #ifdef WIN32
            system("cls");
        #else
            system("clear");
        #endif

        std::cout << "--- CRUDlib <gun> ---\n";
    
        for (int i=0; i <= 3; i++) {
            std::string a[4] = {
                "Create",
                "Read",
                "Update",
                "Delete"
            };

            std::cout << i+1 << ". " << a[i] << " Data\n";  
        }

        std::cout << "---------------------\n";
    
        int option;

        std::cout << "option> ";
        std::cin >> option;

        if (option == 1) {
            std::string gun;
            unsigned int year;

            std::cout << "gun's Name: ";
            std::cin >> gun;
            std::cout << "gun's Year: ";
            std::cin >> year;

            create(gun, year);
        } else if (option == 2) {
            read();
        } else {
            std::cout << "Unable to found the choices";
        }
    }

    return 0;
}