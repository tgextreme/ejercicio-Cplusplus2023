#include <iostream>
#include <cmath>

using namespace std;

int main() // Programa Principal

{
double lado1; // Declara variables para guardar
double lado2; // los dos lados y la hipotenusa
double hip;
// Entrada de datos
std::cout << "Introduzca la longitud del primer cateto: ";cin >> lado1;cout << "Introduzca la longitud del segundo cateto: ";cin >> lado2;
// Cálculos
hip = sqrt (lado1*lado1 + lado2*lado2);
// Salida (presentación de resultados)
cout << endl;
cout << "La hipotenusa vale " << hip << endl ;

return (0);
}

