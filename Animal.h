#pragma once
class Animal {
public:
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void bark();
};

class Cat : public Animal {
public:
    void meow();
};