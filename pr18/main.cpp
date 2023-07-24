#include <iostream>

using namespace std;

class Mamifero{
    public:
    bool sangreCaliente=true;
    bool restiraPulmones=true;
    string nombre;
    void andar(){
        cout<<" andar "<<endl;
    }
    protected:
    void ando(){
        cout<<" H9 "<<endl;
    }
};

class Humano: public Mamifero{
     public:
     Mamifero desciende;
     bool lenguaje=true;
     string nombre;
     string apellido;
     string dni;
     protected:
     void hablar(){
        andar();
        ando();
        
     }


};

struct ordenador{
    string grafica;
    string cpu;
    string placa;
    string ram;
    string caja;

}ordenador;

 struct cuarto{
   struct ordenador pc;
   string mesa;
   string silla;
}cuarto;

int main(){
    struct ordenador pc1;
    struct cuarto cr;
    cr.pc=pc1;

    Humano jose;
    jose.ando();
    jose.desciende.nombre="Mono";

    jose.andar();

    cout<<"hola"<<endl;
}

