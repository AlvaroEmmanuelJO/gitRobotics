/* Practica 2 Presion y profundidad 
by AlvaroEmmanuelJO, A01632255*/ 

#include "presion.hpp"
#include <iostream>
#include <cmath>

float R_abs;
float R_mano;

Presion::Presion(float Altura, float Presuper, float Dens, float Gravedad)
{
    Altura_ = Altura;
    Presuper_ = Presuper;
    Dens_ = Dens;
    Gravedad_ = Gravedad;
}
float Presion::getAltura(void) const
{
    return Altura_;
}
float Presion::getPresuper(void) const
{
    return Presuper_;
}
float Presion::getDens(void) const
{
    return Dens_;
}
float Presion::getGravedad(void) const
{
    return Gravedad_;
}
void Presion::setAltura(float Altura)
{
    Altura_ = Altura;
}
void Presion::setPresuper(float Presuper)
{
    Presuper_ = Presuper;
}
void Presion::setDens(float Dens)
{
    Dens_ = Dens;
}
void Presion::setGravedad(float Gravedad)
{
    Gravedad_ = Gravedad;
}
void Presion::setAll(float Altura, float Presuper, float Dens, float Gravedad)
{
    Altura_ = Altura;
    Presuper_ = Presuper;
    Dens_ = Dens;
    Gravedad_ = Gravedad;
}
double Presion::getPresionabs(void) const
{
 //p= p_o + (p*g*h)
    R_abs = Presuper_ + (Dens_*Gravedad_*Altura_);
    return R_abs;
}
double Presion::getPresionmano(void)const
{
 //p-po = presionmanometrica
    R_mano = R_abs - Presuper_ ;
    return R_mano;
}
void Presion::print(void) const
{
    //std::cout << "(" << Altura_ << "," << Presuper_<< "," << Dens_ << "," << Gravedad_ <<")";
    std::cout << "\n";
    std::cout << "La altura del sistema es = " << Altura_ <<"m" "\n";
    std::cout << "La Presion superficial del sistema es = " << Presuper_ <<"Pa" "\n";
    std::cout << "La Densidad del fluido es = " << Dens_ <<"Kg/m³" "\n";
    std::cout << "La gravedad donde se encuentra el tanque es = " << Gravedad_ <<"m/s²" "\n";
    std::cout << "\n";
}
