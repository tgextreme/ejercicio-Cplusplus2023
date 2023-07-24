#include <iostream>
#include <cmath>

using namespace std;

void hola(string nombre);
double perimetroCuadrado(double lado);


//2*pi*r

double perimetroCirculo(double radio);
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
    struct perro mascota;
};

int main()
{

	int  numeros[10];
	int u=0;
	for(u=0;u<10;u++){
		cout<<"Digame una cantidad"<<endl;
		cin>>numeros[u];
	}
	int grande=-100;
	for(u=0;u<10;u++){
		if(grande<numeros[u]){
			grande=numeros[u];
		}
	}
	printf("El numero mayor es %d",grande);
	
	double tamanyo;
	cout<<"Digame una cantidad"<<endl;
	cin>>tamanyo;
	
	double per=perimetroCuadrado(tamanyo);
	double perCir=perimetroCirculo(tamanyo);
	cout<<"el perimetro es "<<per<<endl;
	cout<<"el perimetro del circulo es "<<perCir<<endl;
	hola("German");
	int i=0;
	for(i=0;0>=0;i+=10000){
		cout<<i<<endl;
	}
	
	
	
	/*
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
    pe1.nombre = "Javier";
    pe1.edad = 22;
    pe1.localizacion = "San fernando";
    pe1.mascota = p1;
    cout << "El nombre del perro es " << pe1.mascota->nombre << endl;*/
}


void hola(string nombre){
	cout<<"Hola "<<nombre<<endl;
}
double perimetroCuadrado(double lado){
	return lado*4;
}

double perimetroCirculo(double radio){
	return (2* M_PI*radio);
}
