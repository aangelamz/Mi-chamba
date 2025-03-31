#ifndef PARTICULA_H
#define PARTICULA_H

#include "vector2d.h"

class Particula {
private:
    
    // Vector de posicion y vector de velocidad
    Vector2D p, v, a;

public: 

    // Constructor por defecto
    Particula();

    // Constructor a partir de vectores p y v
    Particula(Vector2D p, Vector2D v);
    Particula(Vector2D p, Vector2D v, Vector2D a); // Nuevo constructor con aceleración

    // Getters
    // Obtiene el vector de posicion
    Vector2D posicion() const;

    // Obtiene el vector de velocidad
    Vector2D velocidad() const;

    Vector2D aceleracion() const; // Nuevo getter para la aceleración

    // Setters
    // Asigna un vector de posicion
    void posicion( const Vector2D &pos);

    // Asigna un vector de posicion 
    void posicion( double x, double y);

    // Asigna un vector de velocidad
    void velocidad( const Vector2D &vel);

    // Asigna un vector de velocidad
    void velocidad( double m, double a);

    void aceleracion(const Vector2D &acc); // Nuevo setter para la aceleración
    void aceleracion(double m, double ang); // Setter con módulo y ángulo

    // Asigna el modulo de la velocidad
    void vmod(double m);

    // Asigna el angulo de la velocidad
    void vang(double a);

    void amod(double m); // Nuevo método para modificar el módulo de la aceleración

    void aang(double ang); // Nuevo método para modificar el ángulo de la aceleración

    // Nuevo método de cinemática MRU:
    void avanzaMRU(double dt);
    void avanzaMUA(double dt); // Nuevo método para MUA

    // Tostring
    std:: string to_string() const;

    

};

#endif