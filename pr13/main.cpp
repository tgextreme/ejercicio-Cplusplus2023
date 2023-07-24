#include <iostream>
#include<array> // for array, at()
#include<tuple>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Estudiante {       // The class
  public:             // Access specifier
    int edad;        // Attribute (int variable)
    string nombre;  // Attribute (string variable)
};

int main(int argc, char** argv) {
	array <Estudiante, 6> est;
	est.at(1).edad;
	Estudiante ed1;
	ed1.edad=18;
	ed1.nombre="Edu";
	 ;
	return 0;
}
