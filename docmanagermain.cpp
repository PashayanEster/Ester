#include "docmanager.h"
#include <string>
#include <iostream>
int main() {
    Docmanager docManager;
    int choice;
//hello
    do {
        std::cout << "-----------------------------" << std::endl;
        std::cout << "1. Create a new text file" << std::endl;
        std::cout << "2. Edit an existing text file" << std::endl;
        std::cout << "3. View a text file" << std::endl;
        std::cout << "4. Show list of files" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "-----------------------------" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                docManager.create();
                break;
            case 2: {
                std::string content;
                std::cout << "Enter text to append: ";
                std::cin.ignore(); // Clear the input buffer
                std::getline(std::cin, content);
                docManager.edit(content);
                break;
            }
            case 3:
                docManager.view();
                break;
            case 4:
                docManager.show();
                break;
            case 5:
                std::cout << "Exiting the program..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}

//klo


# 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
