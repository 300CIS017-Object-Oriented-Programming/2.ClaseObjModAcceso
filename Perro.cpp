//
// Created by lufe and Gonzo.
//

#include "Perro.h"

void Perro::ladrar() {

    // Ejemplo de variable local
    std::string diaSemana = "jueves";

    std::cout << " Esta ladrando " << nombre << " tengo " << edad << " anios "
              << " soy de la raza:" << raza << " y  me gusta ladrar los " << diaSemana << std::endl;
}

// Ejemplo de método que recibe un paramétro
void Perro::saludar(std::string diaSemana) {   
    std::cout << "Soy " << nombre << "y te estoy saludando el día " << diaSemana;
}


/*
void Perro::ladrar() {
    int veces = 5;
    for (int i = 0; i < veces; i++) {
       // Esta linea combina variables locales con atributos de instancia
        std::cout << nombre << " ladra." << std::endl;
    }
}*/
