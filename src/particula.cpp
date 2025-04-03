#include "particula.h"
#include <cmath>
#include <sstream>

// Constructor por defecto
Particula::Particula() : p(), v(), a() {}

/* Constructor con posicion y velocidad
Particula::Particula(Vector2D pos, Vector2D vel) : p(pos), v(vel), a() {}
*/

// Constructor con posicion, velocidad y aceleracion
Particula::Particula(Vector2D pos, Vector2D vel, Vector2D acc) : p(pos), v(vel), a(acc) {}

// Getters
// Obtiene el vector de posicion
Vector2D Particula::posicion() const {
    return p; 
}
// Obtiene el vector de velocidad
Vector2D Particula::velocidad() const {
    return v; 
}
// Obtiene el vector de aceleracion
Vector2D Particula::aceleracion() const{ 
    return a; }

// Setters
// Asigna un vector de posicion
void Particula::posicion(const Vector2D &pos) {
    p = pos; 
}
// Asigna un vector de posicion con sus componentes con los sets de vector2d
void Particula::posicion(double x, double y) { 
    p.x(x); 
    p.y(y); 
}
// Asigna un vector de velocidad
void Particula::velocidad(const Vector2D &vel) { 
    v = vel; 
}
// Asigna un vector de velocidad con modulo y angulo
void Particula::velocidad(double m, double ang) {
    v.mod(m);
    v.ang(ang, Vector2D::Uds::Radianes);
}
// Asigna un vector de aceleracion
void Particula::aceleracion(const Vector2D &ace) { 
    a = ace; 
}
// Asigna un vector de aceleracion con modulo y angulo
void Particula::aceleracion(double m, double ang) {
    a.mod(m);
    a.ang(ang, Vector2D::Uds::Radianes);
}

// Asigna el modulo del vector de la velocidad
void Particula::vmod(double m) {
    v.mod(m);
}
// Asigna el angulo del vector de la velocidad
void Particula::vang(double ang) {
    v.ang(ang, Vector2D::Uds::Radianes);
}
// Asigna el modulo del vector de la aceleracion
void Particula::amod(double m) {
    a.mod(m);
}
// Asigna el angulo del vector de la aceleracion
void Particula::aang(double ang) {
    a.ang(ang, Vector2D::Uds::Radianes);
}

// Avanzar en MRU basandose en la formula 
void Particula::avanzaMRU(double dt) {
    Vector2D desplazamiento = multiplicar(v, dt);
    p.sumar(desplazamiento);
}

// Avanzar en MUA basandose en la formula
void Particula::avanzaMUA(double dt) {
    Vector2D veloPorDt = multiplicar(v, dt);
    Vector2D acePorDt = multiplicar(a, 0.5 * dt * dt);
    p.sumar(veloPorDt);
    p.sumar(acePorDt);

    // Actualizar velocidad que va cambiando debido a la aceleracion
    Vector2D velNueva = multiplicar(a, dt);
    v.sumar(velNueva);
}

// To_string para la salida de datos
std::string Particula::to_string() const {
    std::ostringstream salida;
    salida  << p.to_string(FMTCARTESIANAS) << " V=(" << v.to_string(FMTPOLARESG) << ") A=(" << a.to_string(FMTPOLARESG) << ")";
    return salida.str();
}