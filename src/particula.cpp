#include "particula.h"
#include <cmath>
#include <sstream>

// Constructor por defecto
Particula::Particula() : p(), v(), a() {}

// Constructor con posición y velocidad
Particula::Particula(Vector2D pos, Vector2D vel) : p(pos), v(vel), a() {}

// Constructor con posición, velocidad y aceleración
Particula::Particula(Vector2D pos, Vector2D vel, Vector2D acc) : p(pos), v(vel), a(acc) {}

// Getters
Vector2D Particula::posicion() const { return p; }
Vector2D Particula::velocidad() const { return v; }
Vector2D Particula::aceleracion() const { return a; }

// Setters
void Particula::posicion(const Vector2D &pos) { p = pos; }
void Particula::posicion(double x, double y) { 
    p.x(x); 
    p.y(y); 
}
void Particula::velocidad(const Vector2D &vel) { v = vel; }
void Particula::velocidad(double m, double ang) {
    v.mod(m);
    v.ang(ang, Vector2D::Uds::Radianes);
}
void Particula::aceleracion(const Vector2D &acc) { a = acc; }
void Particula::aceleracion(double m, double ang) {
    a.mod(m);
    a.ang(ang, Vector2D::Uds::Radianes);
}

// Métodos para modificar módulo y ángulo
void Particula::vmod(double m) {
    v.mod(m);
}
void Particula::vang(double ang) {
    v.ang(ang, Vector2D::Uds::Radianes);
}
void Particula::amod(double m) {
    a.mod(m);
}
void Particula::aang(double ang) {
    a.ang(ang, Vector2D::Uds::Radianes);
}

// Método para avanzar en MRU
void Particula::avanzaMRU(double dt) {
    Vector2D desplazamiento = multiplicar(v, dt);
    p.sumar(desplazamiento);
}

// Método para avanzar en MUA
void Particula::avanzaMUA(double dt) {
    // Actualizar posición: r = r0 + v * dt + 0.5 * a * dt^2
    Vector2D desplazamientoVel = multiplicar(v, dt);
    Vector2D desplazamientoAcel = multiplicar(a, 0.5 * dt * dt);
    p.sumar(desplazamientoVel);
    p.sumar(desplazamientoAcel);

    // Actualizar velocidad: v = v0 + a * dt
    Vector2D incrementoVel = multiplicar(a, dt);
    v.sumar(incrementoVel);
}

// Conversión a cadena
std::string Particula::to_string() const {
    std::ostringstream oss;
    oss  << p.to_string(FMTCARTESIANAS) << " V=(" << v.to_string(FMTPOLARESG) << ") A=(" << a.to_string(FMTPOLARESG) << ")";
    return oss.str();
}