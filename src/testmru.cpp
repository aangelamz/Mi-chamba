#include <iostream>
#include <iomanip>
#include "particula.h"
#include <cmath>

constexpr double PI = 3.14159265358979323846;

int main() {
    double posX, posY;
    double mod, angDeg;
    double tInicial, tFinal, dt;
    
    std::cout << "Dame los datos para la simulación:" << std::endl;
    std::cout << " Posición inicial (x e y) : ";
    std::cin >> posX >> posY;
    std::cout << " Velocidad (módulo y ángulo) : ";
    std::cin >> mod >> angDeg;
    std::cout << " Tiempos (inicial, final, incremento) : ";
    std::cin >> tInicial >> tFinal >> dt;
    
    // Convertir el ángulo de grados a radianes
    double angRad = angDeg * PI / 180.0;
    
    Particula p;
    p.posicion(posX, posY);
    p.velocidad(mod, angRad);
    
    std::cout << "Creada la particula : " << p.to_string() << std::endl;
    std::cout << "Simulación MRU:" << std::endl;
    std::cout << "t\tX\tY" << std::endl;
    

    double currentTime = tInicial;
    double step = currentTime;
    // La primera iteración avanza la partícula en tInicial segundos y, a partir de ahí, de dt en dt.
    while (currentTime <= tFinal) {
         p.avanzaMRU(step);
        std::cout << currentTime << " " 
                  << p.posicion().x() << " " 
                  << p.posicion().y() << std::endl;
        step = dt;
        currentTime += step;
    }
    
    return 0;
}