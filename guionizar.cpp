#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre[5] = {"Pepe", "Ana", "Natalia", "jose", "lau"};
    int edades[5] = {20, 30, 35, 27, 23};
    string localidad[5] = {"Jerez de la frontera", "Puerto real", "San fernando", "Chiclana", "Cadiz"};
    string persona[5][3];

    persona[0][0] = "pepe";
    persona[0][1] = "20";
    persona[0][2] = "Jerez de la frontera";
    persona[1][0] = "Ana";
    persona[1][1] = "30";
    persona[1][2] = "Puerto real";
    persona[2][0] = "Natalia";
    persona[2][1] = "35";
    persona[2][2] = "San fernando";
    persona[3][0] = "Rosa";
    persona[3][1] = "25";
    persona[3][2] = "Chiclana";
    persona[4][0] = "Jose";
    persona[4][1] = "45";
    persona[4][2] = "San fernando";
    int menor = 0;

    for (int i = 0; i < 5; i++)
    { // segunda parte

        cout << "nombre " << persona[i][0] << " edad " << persona[i][1] << " localidad " << persona[i][2] << endl;
    }

    // propuesta array ecuaciones segundo grado

    /*for(int i=0;i<5;i++){ // segunda parte
        for(int j=0;j<3;j++){
            cout<<persona[i][j]<<endl;
        }
    }
    /*for(int i=0;i<5;i++){//primera parte

        if (nombre[i].length()<nombre[menor].length()){

            menor=i;
        }
    }
    cout<<"El nombre con menor tamaño de palabra es "<<nombre[menor]<<" cuya edad es "<<edades[menor]<<" cuya localidad es "<<localidad[menor]<<endl;
*/
}