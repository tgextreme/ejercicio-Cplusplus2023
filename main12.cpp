#include <iostream>

using namespace std;

struct perro
{
    int id;
    int edad;
    string nombre;
    string localizacion;
};
struct persona
{
    string nombre;
    int edad;
    string localizacion;
    struct perro *mascota;
};

int main()
{
    struct perro p1;
    p1.id = 50;
    p1.edad = 4;
    p1.nombre = "Chucho";
    p1.localizacion = "San fernando";

    cout << "La id del perro es " << p1.id << endl;
    cout << "La edad del perro es " << p1.edad << endl;
    cout << "El nombre del perro es " << p1.nombre << endl;
    cout << "La localizacion del perro es " << p1.localizacion << endl;
    struct persona pe1;
    /*pe1.nombre = "Javier";
    pe1.edad = 22;
    pe1.localizacion = "San fernando";*/
    //pe1.mascota = &p1;
    //cout << "El nombre del perro es " << pe1.mascota->nombre << endl;
}