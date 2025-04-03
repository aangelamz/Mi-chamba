#include "matematicas.h"

bool cad2num(const char *c, double &n) {
    
    // Inicializar el numero
    n = 0.0; 

    // Factor para manejar numeros negativos
    double factor = 1.0; 

    // Indica si estamos procesando la parte decimal
    bool decimal = false; 

    // Para la parte decimal
    double divisor = 10.0;

    // Manejar el signo negativo y al final colocar si es + o -
    if (*c == '-') {
        factor = -1.0;
        c++;
    }

    // Recorrer la cadena hasta el final "'\0'"
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
                // Aumentar el divisor para la parte decimal
                divisor *= 10.0;
            }
        }
        c++;
    }

    // Aplicar el signo
    n *= factor;
    return true;
}