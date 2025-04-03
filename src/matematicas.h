#ifndef MATEMATICAS_H
#define MATEMATICAS_H

// Pongo algunas constantes que usare en el programaq
const double PI = 3.14159265358979323846;
const double PI_MEDIOS= PI / 2;
const double PI_ENTRE_CIENTO_80= PI / 180;
const double CIENTO_80_ENTRE_PI = 180 / PI;


/*! @brief Conversión de una cadena a número

Esta función convierte una cadena de tipo cadena-C a números. Si es posible la conversión, al ser un bool
nos devuelve true, si no, false, y el resultado lo devolverá en "n".
Admite un signo positivo o negativo delante y un punto decimal. También admite espacios en blanco al comienzo 
o al final de la cadena.
Si se pasa una cadena vacía o puntero nulo devolverá false.
*/
bool cad2num(const char *c, double &n);

#endif 