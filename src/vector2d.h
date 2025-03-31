#ifndef VECTOR2D_H
#define VECTOR2D_H

#define FMTCARTESIANAS 1
#define FMTPOLARESR 2
#define FMTPOLARESG 4

#include <string>


class Vector2D {
private:
    double px;   // Coordenada x 
    double py;   // Coordenada y 

    // Convierte un ángulo en radianes a grados
    double radianesAGrados(double radianes) const;

    // Convierte un ángulo en grados a radianes
    double gradosARadianes(double grados) const;

public:
    // Marcar las unidades
    enum class Uds { Grados, Radianes };

    // Constructor por defecto
    Vector2D();

    // Constructor 
    Vector2D(double x, double y);

    // Constructor que inicializa el vector con módulo y ángulo
    Vector2D(double modulo, double angulo, Uds uds);

    // Getters
    // Obtiene la componente x del vector
    double x() const;

    // Obtiene la componente y del vector
    double y() const;

    // Calcula el módulo del vector
    double mod() const;

    // Calcula el ángulo del vector
    double ang(const Uds unidades = Uds::Grados) const;

    // Setters
    // Asigna un nuevo valor a la componente x del vector
    void x(const double &x_nueva);

    // Asigna un nuevo valor a la componente y del vector
    void y(const double &y_nueva);

    // Define el ángulo del vector
    void ang(const double &ang, Uds uds = Uds::Grados);

    // Define el módulo del vector
    void mod(const double &mod);

    // Operaciones con vectores
    // Suma el vector actual con otro vector
    void sumar(const Vector2D &segundo);

    // Resta un vector al vector actual
    void restar(const Vector2D &segundo);

    // Multiplica el vector actual por un escalar
    void multiplicar(const double &escalar);

    // Representa el vector en forma de cadena
    std::string to_string(const int &formato = FMTCARTESIANAS | FMTPOLARESG) const;
};

Vector2D sumar(const Vector2D &v1, const Vector2D &v2);

// Resta dos vectores
Vector2D restar(const Vector2D &v1, const Vector2D &v2);

// Multiplica un vector por un escalar
Vector2D multiplicar(const Vector2D &v, const double &escalar);

// Multiplica un escalar por un vector
Vector2D multiplicar(const double &escalar, const Vector2D &v);

// Calcula el producto escalar de dos vectores
double multiplicar(const Vector2D &v1, const Vector2D &v2);

#endif