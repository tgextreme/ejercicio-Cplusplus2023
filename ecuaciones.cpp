#include <iostream>
#include <cmath>
using namespace std;

void ecuacionSegundo(double a, double b, double c){
double  raiz, op1, op2;


   
    raiz = (b * b) - (4 * a * c);

    if (raiz < 0)
    {
        cout << "No tiene solución" << endl;
    }
    else if (raiz == 0)
    {
        raiz = sqrt(raiz);
        op1 = (-b + raiz) / (2 * a);
        
        cout << " operacion 1 " << op1 << endl;
    }
    else
    {
        raiz = sqrt(raiz);
        op1 = (-b + raiz) / (2 * a);
        op2 = (-b - raiz) / (2 * a);
        cout << " operacion 1 " << op1 << " operaci n2 " << op2 << endl;
    }

}



int main(){
    double ecuacion[3][3];
    ecuacion[0][0]=5;
    ecuacion[0][1]=5;
    ecuacion[0][2]=5;

    ecuacion[1][0]=15;
    ecuacion[1][1]=5;
    ecuacion[1][2]=85;
    
    ecuacion[2][0]=5;
    ecuacion[2][1]=5;
    ecuacion[2][2]=5;

    for(int i=0;i<3;i++){
        ecuacionSegundo(ecuacion[i][0],ecuacion[i][1], ecuacion[i][2]);
    }

}