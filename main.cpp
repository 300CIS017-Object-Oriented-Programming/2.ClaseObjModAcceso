#include <iostream>
#include "Perro.h"

int main() {

    std::cout << "Hello, World!" << std::endl;

    // Instanciar
    Perro firulais;
    firulais.nombre ="Firulais";
    firulais.color ="Negro";
    firulais.edad = 3;
    firulais.tamanio = "Grande";

    std::cout << "Que ladre" << std::endl;
    firulais.ladrar();
    return 0;
}
