#include <iostream>
using namespace std;
enum class CalificacionECTS
{
    A,
    B,
    C,
    D,
    E,
    F,
    G
}; // No van entre comillas!
enum class PuestoPodium
{
    primero,
    segundo,
    tercero
};
enum class CategoriaLaboral
{
    administrativo=10,
    programador=20,
    analista=40,
    directivo=60
};

enum estudio
{
    informatica=10,
    matematicas=20,
    analista=40,
    directivo=60
};
int main()
{
    CalificacionECTS nota;
    PuestoPodium podium;
    CategoriaLaboral categoria_laboral;
    nota = CalificacionECTS::A;
    podium = PuestoPodium::primero;
    categoria_laboral = CategoriaLaboral::programador;
    PuestoPodium::tercero;
    int categoria=(int) estudio::analista;
    // Las siguientes sentencias dan error de compilación
    // categoria_laboral = CategoriaLaboral::peon
    // categoria_laboral = peon;
    // categoria_laboral = 'a';
    // cin >> categoria_laboral;
}