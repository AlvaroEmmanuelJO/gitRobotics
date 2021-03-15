/* Practica 2 Presion y profundidad 
by AlvaroEmmanuelJO, A01632255*/ 

#include "presion.hpp"
#include <iostream>

int main()
{
    Presion pyp1(12,1.01e05,1000,9.8); //ALtura, presion sup, Densidad, Gravedad
    pyp1.print();
    std::cout << "El calculo de la presión absoluta del sistema es =  " << pyp1.getPresionabs() <<"Pa" "\n";
    std::cout << "El calculo de la presión manometrica del sistema es = " << pyp1.getPresionmano() <<"Pa" "\n";
    std::cout << "\n";
    return 0;

}