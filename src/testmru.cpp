#include <iostream>
#include <iomanip>
#include <cmath>
#include "particula.h"
#include "matematicas.h"

int main() {
    double posX, posY;
    double mod, angGrad;
    double tInicial, tFinal, dt;
    
    std::cout << "Dame los datos para la simulacion, con espacios:" << std::endl;
    std::cout << " Posicion inicial (x e y) : ";
    std::cin >> posX >> posY;
    std::cout << " Velocidad (modulo y angulo) : ";
    std::cin >> mod >> angGrad;
    std::cout << " Tiempos (inicial, final, incremento) : ";
    std::cin >> tInicial >> tFinal >> dt;
    
    // Convertir el angulo de grados a radianes
    double angRad = angGrad * PI_ENTRE_CIENTO_80;
    
    Particula p;
    p.posicion(posX, posY);
    p.velocidad(mod, angRad);
    
    std::cout << "Creada la particula : " << p.to_string() << std::endl;
    std::cout << "Simulacion MRU:" << std::endl;
    std::cout << "t\tX\tY" << std::endl;
    

    double tAhora = tInicial;
    double tSiguiente = tAhora;
    // La primera iteracion avanza la particula en tInicial segundos y, a partir de ahi, de dt en dt.
    while (tAhora <= tFinal) {
         p.avanzaMRU(tSiguiente);
        // Salida por pantalla
        std::cout << tAhora << "  " 
                  << p.posicion().x() << "  " 
                  << p.posicion().y() << std::endl;
        
        tSiguiente = dt;
        // Incrementar el tiempo 
        tAhora += tSiguiente;
    }
    
    return 0;
}