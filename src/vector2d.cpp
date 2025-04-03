#include "vector2d.h"
#include "matematicas.h"
#include <iostream>
#include <cmath>
#include <sstream>


// Funcion para pasar de radianes a grados
double Vector2D::radianesAGrados(double radianes) const {
    return radianes * CIENTO_80_ENTRE_PI;
}

// Funcion para pasar de grados a radianes
double Vector2D::gradosARadianes(double grados) const {
    return grados * PI_ENTRE_CIENTO_80;
}

// Constructor por defecto
Vector2D::Vector2D() : px(0), py(0) {}

// Constructor 
Vector2D::Vector2D(double x, double y) : px(x), py(y) {}

// Constructor para el modulo y el angulo
Vector2D::Vector2D(double modulo, double angulo, Uds uds) {
    if (uds == Uds::Radianes) {
        angulo = radianesAGrados(angulo);
    }
    // Se asume que el angulo se da en grados
    px = modulo * cos(angulo * PI_ENTRE_CIENTO_80);
    py = modulo * sin(angulo * PI_ENTRE_CIENTO_80);
}

// Getters
double Vector2D::x() const { 
    return px; 
}
double Vector2D::y() const {
    return py; 
}

double Vector2D::mod() const {
    return sqrt(px * px + py * py);
}

double Vector2D::ang(Uds uds) const {
    double angulo = atan2(py, px);
    if (uds == Uds::Grados) {
        return radianesAGrados(angulo);
    }
    return angulo;
}

// Setters
void Vector2D::x(double x_nueva) { 
    px = x_nueva; 
}
void Vector2D::y(double y_nueva) { 
    py = y_nueva; 
}

void Vector2D::ang(double valor, Uds uds) {
    double rdns;
    if (uds == Uds::Grados) {
        rdns = gradosARadianes(valor);
    } else {
        rdns = valor;
    }
    double modulo = mod();
    px = modulo * cos(rdns);
    py = modulo * sin(rdns);
}

void Vector2D::mod(double nuevoMod) {
    double angMod = ang(Uds::Radianes);
    px = nuevoMod * cos(angMod);
    py = nuevoMod * sin(angMod);
}

// Funcion que modifica el vector actual sumandole el segundo
void Vector2D::sumar(const Vector2D &segundo) {
    px += segundo.x();
    py += segundo.y();
}

// Funcion que modifica el vector actual restandole el segundo
void Vector2D::restar(const Vector2D &segundo) {
    px -= segundo.x();
    py -= segundo.y();
}

// Funcion que modifica el vector actual multiplicandole el segundo
void Vector2D::multiplicar(double escalar) {
    px *= escalar;
    py *= escalar;
}

// Devuelve la suma de dos vectores 
Vector2D sumar(const Vector2D &v1, const Vector2D &v2) {
    return Vector2D(v1.x() + v2.x(), v1.y() + v2.y());
}

// Devuelve la resta de dos vectores 
Vector2D restar(const Vector2D &v1, const Vector2D &v2) {
    return Vector2D(v1.x() - v2.x(), v1.y() - v2.y());
}

// Devuelve la multiplicacion de un vector por un escalar 
Vector2D multiplicar(const Vector2D &v, double escalar) {
    return Vector2D(v.x() * escalar, v.y() * escalar);
}

// Devuelve la multiplicacion de un escalar por un vector 
Vector2D multiplicar(double escalar, const Vector2D &v) {
    return Vector2D(v.x() * escalar, v.y() * escalar);
}

// Devuelve el producto escalar de dos vectores
double multiplicar(const Vector2D &v1, const Vector2D &v2) {
    return (v1.x() * v2.x() +  v1.y() * v2.y());
}

std::string Vector2D::to_string(int formato) const {
    std::ostringstream oss;
    bool cart = (formato & FMTCARTESIANAS);
    bool polR = (formato & FMTPOLARESR);
    bool polG = (formato & FMTPOLARESG);
    
    if (cart) {
        oss << "P=(" << px << "," << py << ")";
    }
    if (cart &&(polR || polG)) {
        oss << "# ";
    }
    if (polR || polG) {
        oss << "@mod=" << mod();
    }
    
    if (polR) {
        oss << " @rad=" << ang(Uds::Radianes);
    }
    
    if (polG) {
        oss << " @deg=" << ang(Uds::Grados);
    }
    
    return oss.str();
}