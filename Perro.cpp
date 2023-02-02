//
// Created by lufe0 on 31/01/2023.
//

#include "Perro.h"

void Perro::ladrar() {
    int veces = 5;
    for (int i = 0; i < veces; i++) {
       // Esta linea combina variables locales con atributos de instancia
        std::cout << nombre << " ladra." << std::endl;
    }
}