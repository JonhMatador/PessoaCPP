#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "cabeca/Cabeca.h"
#include "tronco/Tronco.h"
#include "inferior/Inferior.h"

class Pessoa {
public:
    int age;
    float height;
    std::string name;
    Cabeca cabeca;
    Tronco tronco;
    Inferior inferior;

    Pessoa() : age(18), height(1.80), name("Samuel") {}
};

#endif
