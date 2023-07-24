#include <iostream>
using namespace std;
int main(){
double salario_bruto; // Salario bruto, en euros
double retencion; // Retención a aplicar, en eurossalario_bruto retencion
cout << "Introduzca salario bruto: ";
cin >> salario_bruto; // El usuario introduce 32538
retencion = salario_bruto * 0.18;
cout << "\nRetención a aplicar: " << retencion;
}
