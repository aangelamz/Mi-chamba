#include "matematicas.h"
#include <cstdlib>
#include <cctype>

bool cad2num(const char *c, double &n) {
    n = 0.0; // Inicializar el número
    double factor = 1.0; // Factor para manejar números negativos
    bool decimal = false; // Indica si estamos procesando la parte decimal
    double divisor = 10.0; // Divisor para la parte decimal

    // Manejar el signo negativo
    if (*c == '-') {
        factor = -1.0;
        c++;
    }

    // Recorrer la cadena
    while (*c != '\0') {
        if (*c == '.') {
            // Encontrar el punto decimal
            decimal = true;
        } else {
            // Parte entera o decimal
            if (!decimal) {
                n = n * 10 + (*c - '0');
            } else {
                n += (*c - '0') / divisor;
                divisor *= 10.0;
            }
        }
        c++;
    }

    // Aplicar el signo
    n *= factor;
    return true;
}