#ifndef MATEMATICAS_H
#define MATEMATICAS_H

// Pongo algunas constantes que usare en el programaq
const double PI = 3.14159265358979323846;
const double PI_MEDIOS= PI / 2;
const double PI_ENTRE_CIENTO_80= PI / 180;
const double CIENTO_80_ENTRE_PI = 180 / PI;


// Mi funcion que pasa de cadena a numero
bool cad2num(const char *c, double &n);

#endif 