#ifndef PARTICULA_H
#define PARTICULA_H

#include "vector2d.h"

class Particula {
private:
    
    // Vector de posicion, vector de velocidad y vector de aceleracion
    Vector2D p, v, a;

public: 

    // Constructor por defecto
    Particula();

    // Constructor a partir de vectores p y v
    /*Particula(Vector2D p, Vector2D v);*/

    // Constructor a partir de vectores p, v y a
    Particula(Vector2D p, Vector2D v, Vector2D a); // Nuevo constructor con aceleracion

    // Getters
    // Obtiene el vector de posicion
    Vector2D posicion() const;

    // Obtiene el vector de velocidad
    Vector2D velocidad() const;

    // Nuevo getter para la aceleracion
    Vector2D aceleracion() const; 

    // Setters
    // Asigna un vector de posicion
    void posicion(const Vector2D &pos);

    // Asigna un vector de posicion 
    void posicion(double x, double y);

    // Asigna un vector de velocidad
    void velocidad(const Vector2D &vel);

    // Asigna un vector de velocidad
    void velocidad(double m, double a);
    
    // Nuevo setter para la aceleracion
    void aceleracion(const Vector2D &ace); 

    // Asigna un vector de aceleracion
    void aceleracion(double m, double ang);

    // Asigna el modulo de la velocidad
    void vmod(double m);

    // Asigna el angulo de la velocidad
    void vang(double a);
    
    // Asigna el modulo de la aceleracion
    void amod(double m); 
    
    // Asigna el angulo de la aceleracio
    void aang(double ang); 

    // Avanzar en ambos movimientos
    void avanzaMRU(double dt);
    void avanzaMUA(double dt); 

    // Tostring
    std:: string to_string() const;

};

#endif