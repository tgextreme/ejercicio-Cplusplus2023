#include <iostream>

using namespace std;

class SecuenciaCaracteres
{
private:
    static const int TAMANIO = 100;
    char vector_privado[TAMANIO];
    int totak_utilizados;

public:
    SecuenciaCaracteres()
    {
    }
    int TotalUtilizados()
    {
    }
    int Capacidad(char  palabra)
    {
        return sizeof(palabra);

    }
    void Aniade(char nuevo)
    {
    }
    char Elemento(int indice)
    {

    }
    int TablaRectangularEnteros(char caracter){
        return (int)caracter;
    }
    char ToASCII(int numero){
        return (char)numero;
    }

};

int main()
{
    SecuenciaCaracteres sec;
    char caracter='a';
    bool repetir=true;
    bool aparece=false;
    char  p[]={'d','e','s','t','i','n','o'};
    char q[]={'s','i'};
    for(int i=0; i<2;i++){
        aparece=false;
        for(int j=0 ;j<7;j++){
            if(p[i]==q[j]){
                aparece=true;
            }
        }
    }
    if(aparece){
        cout<<"Aparece"<<endl;
    }else{
        cout<<"No aparece"<<endl;
    }
    
for(int i=0;i<255;i++){
    cout<<"| "<<i<< " | "<< sec.ToASCII(i)<<"|"<<endl;
    }
    /*do{
    /    for(int i=0;i<7;i++){
            if(caracter==q[i]){
                cout<<caracter<<endl;
            }
        }
        caracter++;

    }while(caracter='z'+1&repetir);*/
}