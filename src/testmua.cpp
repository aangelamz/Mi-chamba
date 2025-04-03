#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "particula.h"
#include "matematicas.h"


int main(int argc, const char *argv[]) {
    if (argc != 10) {
        std::cout << "El programa necesita los siguientes datos:\n"
                  << "./testmua x y vMod vAng aMod aAng tIni tFin tInc\n";
        return 1;
    }

    // Todas las vangriables que participan
    double x, y, vMod, vAng, aMod, aAng, tIni, tFin, tInc;

    // Se asegura con un puntero que los datos no generen fallo
    if (!cad2num(argv[1], x) || !cad2num(argv[2], y) ||
        !cad2num(argv[3], vMod) || !cad2num(argv[4], vAng) ||
        !cad2num(argv[5], aMod) || !cad2num(argv[6], aAng) ||
        !cad2num(argv[7], tIni) || !cad2num(argv[8], tFin) ||
        !cad2num(argv[9], tInc)) {
        std::cout << "Todos los datos han de ser numericos.\n";
        return 1;
    }

    // Convertir angulos de grados a radianes
    vAng = vAng * PI_ENTRE_CIENTO_80;
    aAng = aAng * PI_ENTRE_CIENTO_80;

    // Crear la particula
    Particula p(Vector2D(x, y), Vector2D(vMod * cos(vAng), vMod * sin(vAng)), Vector2D(aMod * cos(aAng), aMod * sin(aAng)));

    std::cout << "Creada la particula: " << p.to_string() << std::endl;
    std::cout << "Simulacion MUA:\n";
    std::cout << "t\tX\tY\n";

    for (double t = tIni; t <= tFin; t += tInc) {
        // Salida por pantalla de la posicion X de la particula y de la posicion Y de la particula
        std::cout << t << "\t" << p.posicion().x() << "\t" << p.posicion().y() << std::endl;
        p.avanzaMUA(tInc);
    }

    return 0;
}