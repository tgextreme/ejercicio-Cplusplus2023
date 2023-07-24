#include <iostream>
#include <fstream>

using namespace std;
int main(){

    char cad[1000];
    string nombre="main3.cpp";
    ifstream archivo (nombre.c_str());
    string intermedio;
    while (getline(archivo, intermedio))
    {
                cout << intermedio << endl;
    }
}