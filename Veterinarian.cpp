#include "Veterinarian.h"
#include "animal.h"
#include <iostream>

void Veterinarian::treatAnimal(Animal* animal) {
    if (Dog* dog = dynamic_cast<Dog*>(animal)) {
        dog->bark();
    }
    else if (Cat* cat = dynamic_cast<Cat*>(animal)) {
        cat->meow();
    }
    else {
        std::cout << "Unknown animal!" << std::endl;
    }
}