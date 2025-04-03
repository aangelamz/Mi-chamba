#include <iostream>
#include <iomanip>
#include "particula.h"
#include "matematicas.h"
#include "vector2d.h"


int main() {    
    // Crear particula utilizando el constructor por defecto
    Particula part;
    std::cout << "Particula (default): " << part.to_string() << std::endl;
    
    // Establecer la posicion usando coordenadas 
    part.posicion(3.0, 4.0);
    std::cout << "Despues de posicion(3,4): " << part.to_string() << std::endl;
    
    // Establecer la velocidad utilizando modulo y angulo 
    part.velocidad(5.0, 45.0 * PI_ENTRE_CIENTO_80);
    std::cout << "Despues de velocidad(5,45°): " << part.to_string() << std::endl;
    
    // Modificar el modulo de la velocidad 
    part.vmod(10.0);
    std::cout << "Despues de vmod(10): " << part.to_string() << std::endl;
    
    // Modificar el angulo de la velocidad a 30° 
    part.vang(30.0 * PI_ENTRE_CIENTO_80);
    std::cout << "Despues de vang(30°): " << part.to_string() << std::endl;
    
    // Establecer la aceleracion utilizando modulo y angulo 
    part.aceleracion(2.0, 90.0 * PI_ENTRE_CIENTO_80);
    std::cout << "Despues de aceleracion(2,90°): " << part.to_string() << std::endl;
    
    // Modificar la aceleracion cambiar modulo a 4 y angulo a 45° 
    part.amod(4.0);
    part.aang(45.0 * PI_ENTRE_CIENTO_80);
    std::cout << "Despues de amod(4) y aang(45°): " << part.to_string() << std::endl;
    
    return 0;
}