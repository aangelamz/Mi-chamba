#include <iostream>
#include <iomanip>
#include "particula.h"
#include "matematicas.h"


int main() {    
    // Crear particula utilizando el constructor por defecto.
    Particula part;
    std::cout << "Particula (default): " << part.to_string() << std::endl;
    
    // Establecer la posición usando coordenadas (x, y)
    part.posicion(3.0, 4.0);
    std::cout << "Después de posicion(3,4): " << part.to_string() << std::endl;
    
    // Establecer la velocidad utilizando módulo y ángulo (en radianes)
    // Por ejemplo, módulo = 5 y ángulo = 45° (convertido a radianes)
    part.velocidad(5.0, 45.0 * PI / 180.0);
    std::cout << "Después de velocidad(5,45°): " << part.to_string() << std::endl;
    
    // Modificar el módulo de la velocidad (vmod)
    part.vmod(10.0);
    std::cout << "Después de vmod(10): " << part.to_string() << std::endl;
    
    // Modificar el ángulo de la velocidad (vang) a 30° (en radianes)
    part.vang(30.0 * PI / 180.0);
    std::cout << "Después de vang(30°): " << part.to_string() << std::endl;
    
    // Establecer la aceleración utilizando módulo y ángulo (por ejemplo, 2 y 90°)
    part.aceleracion(2.0, 90.0 * PI / 180.0);
    std::cout << "Después de aceleracion(2,90°): " << part.to_string() << std::endl;
    
    // Modificar la aceleración: cambiar módulo a 4 y ángulo a 45° (en radianes)
    part.amod(4.0);
    part.aang(45.0 * PI / 180.0);
    std::cout << "Después de amod(4) y aang(45°): " << part.to_string() << std::endl;
    
    return 0;
}