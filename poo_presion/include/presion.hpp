/* Practica 2 Presion y profundidad 
by AlvaroEmmanuelJO, A01632255*/ 

#pragma once

#ifndef PRESION_H
#define PRESION_H

class Presion
{
    //privete menbers
private:

    float Altura_;   //profundidad
    float Presuper_; //presion superficial
    float Dens_;     //densidad del fluido = dens
    float Gravedad_; //Gravedad

//public menbers
public:

    Presion(float Altura, float Presuper, float Dens, float Gravedad);
    float getAltura(void) const;
    float getPresuper(void) const;
    float getDens(void) const;
    float getGravedad(void) const;
    void setAltura(float Altura);
    void setPresuper(float Presuper);
    void setDens(float Dens);
    void setGravedad(float Gravedad);
    void setAll(float Altura, float Presuper, float Dens, float Gravedad);
    double getPresionabs(void) const;
    double getPresionmano(void)const;
    void print(void) const;
};
#endif