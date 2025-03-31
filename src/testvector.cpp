#include <iostream>
#include "vector2d.h"
#include "matematicas.h"

using namespace std;

int main() {

    Vector2D v(3, 2);

    // Crear vectores en polares
    Vector2D v1(2, 60, Vector2D::Uds::Grados);
    Vector2D v2;
    v2 = Vector2D(3, PI / 4, Vector2D::Uds::Radianes);

    // Mostrar vectores en la salida estándar
    cout << "v (defecto) = " << v.to_string() << endl;
    cout << "v (cart) = " << v.to_string(FMTCARTESIANAS) << endl;
    cout << "v (polg) = " << v.to_string(FMTPOLARESG) << endl;
    cout << "v (polr) = " << v.to_string(FMTPOLARESR) << endl;
    cout << "v (cart+polr) = " << v.to_string(FMTCARTESIANAS | FMTPOLARESR) << endl;
    cout << "v (cart+polr+polg) = " << v.to_string(FMTCARTESIANAS | FMTPOLARESR | FMTPOLARESG) << endl;
    cout << "v1 = " << v1.to_string() << endl;
    cout << "v2 = (" << v2.x() << "," << v2.y() << ")" << endl;
    cout << " = @ang radianes = " << v2.ang(Vector2D::Uds::Radianes) << endl;
    cout << " = @ang grados = " << v2.ang() << endl;
    cout << " = @ang grados = " << v2.ang(Vector2D::Uds::Grados) << endl;
    cout << " = @módulo = " << v2.mod() << endl;

    Vector2D v3;

    cout << "Suma de vectores: " << endl;
    v3 = sumar(v1, v2);
    cout << " v3 = v1+v2 = " << v3.to_string() << endl;
    v1.sumar(v2);
    cout << " v1 = v1+v2 = " << v1.to_string() << endl;

    cout << "Resta de vectores: " << endl;
    v3 = restar(v1, v2);
    cout << " v3 = v1-v2 = " << v3.to_string() << endl;
    v1.restar(v2);
    cout << " v1 = v1-v2 = " << v1.to_string() << endl;

    cout << "Producto de vectores por escalares: " << endl;
    v1.multiplicar(2);
    cout << " v1 = 2*v1 = " << v1.to_string() << endl;
    v3 = multiplicar(v1, 3);
    cout << " v3 = v1*3 = " << v3.to_string() << endl;
    v3 = multiplicar(3, v1);
    cout << " v3 = 3*v1 = " << v3.to_string() << endl;

    cout << "Producto escalar de vectores: " << endl;
    double p = multiplicar(v1,v2);
    cout << " p = v1*v2 = " << p << endl;

    cout << "Modificar los vectores:" << endl;
    v1.x(10);
    v1.y(5);
    cout << " v1 = " << v1.to_string() << endl;

    v2.ang(30); // En grados
    v2.mod(10);
    cout << " v2 = " << v2.to_string() << endl;

    v3.ang(PI / 4, Vector2D::Uds::Radianes);
    v3.mod(10);
    cout << " v3 = " << v3.to_string() << endl;
    return 0;
}
