#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "particula.h"
#include "matematicas.h"


int main(int argc, const char *argv[]) {
    if (argc != 10) {
        std::cerr << "La sintaxis para llamar a este programa es la siguiente:\n"
                  << "./testmua x y vm va am aa tini tfin tinc\n"
                  << "Todos los datos han de ser numéricos.\n";
        return 1;
    }

    double x, y, vm, va, am, aa, tini, tfin, tinc;
    if (!cad2num(argv[1], x) || !cad2num(argv[2], y) ||
        !cad2num(argv[3], vm) || !cad2num(argv[4], va) ||
        !cad2num(argv[5], am) || !cad2num(argv[6], aa) ||
        !cad2num(argv[7], tini) || !cad2num(argv[8], tfin) ||
        !cad2num(argv[9], tinc)) {
        std::cerr << "Todos los datos han de ser numéricos.\n";
        return 1;
    }

    // Convertir ángulos de grados a radianes
    va = va * PI / 180.0;
    aa = aa * PI / 180.0;

    // Crear la partícula
    Particula p(Vector2D(x, y), Vector2D(vm * cos(va), vm * sin(va)), Vector2D(am * cos(aa), am * sin(aa)));

    std::cout << "Creada la partícula: " << p.to_string() << std::endl;
    std::cout << "Simulación MUA:\n";
    std::cout << "t\tX\tY\n";

    for (double t = tini; t <= tfin; t += tinc) {
        std::cout << t << "\t" << p.posicion().x() << "\t" << p.posicion().y() << std::endl;
        p.avanzaMUA(tinc);
    }

    return 0;
}