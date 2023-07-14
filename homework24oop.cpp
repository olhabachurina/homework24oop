// homework24oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "animal.h"
#include "veterinarian.h"

int main() {
    Animal* animal = new Dog();

    if (dynamic_cast<Cat*>(animal)) {
        std::cout << "The animal is a Cat." << std::endl;
    }
    else {
        std::cout << "The animal is not a Cat." << std::endl;
    }

    if (dynamic_cast<Dog*>(animal)) {
        std::cout << "The animal is a Dog." << std::endl;
    }
    else {
        std::cout << "The animal is not a Dog." << std::endl;
    }

    Veterinarian vet;
    vet.treatAnimal(animal);

    delete animal;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
