#ifndef OLHOS_H
#define OLHOS_H

#include <string>

class Olhos {
public:
    std::string corIris;
    float diametro;
    bool cego;

    Olhos() : corIris("Marron"), diametro(15.0f), cego(false) {}
};

#endif
