#include <iostream>
#include <string>

using namespace std;

int contadorNumero(string str, int numero)
{
    char num;
    int contador=0;
    switch (numero)
    {
    case 1:
        num = '1';
        break;
    case 2:
        num = '2';
        break;
    case 3:
        num = '3';
        break;
    case 4:
        num = '4';
        break;
    case 5:
        num = '5';
        break;
    case 6:
        num = '6';
        break;
    case 7:
        num = '7';
        break;
    case 8:
        num = '8';
        break;
    case 9:
        num = '9';
        break;
    case 0:
        num = '0';
        break;
    }

    for(int i=0; i<str.length();i++){
        if(str[i]==num){
            contador++;
        }
    }

    return contador;
}

int main()
{

    int contador1=0;
    int contador2=0;
    int cont=0;
    string str1="";
    string str2="";
    cout<<"Digame el primer numero"<< endl;
    cin>>str1;
    cout<<"Digame el segundo numero"<< endl;
    cin>>str2;
    for(int i=10; i>=0;i--){
        contador1=contadorNumero(str1, i);
         contador2=contadorNumero(str2, i);
        if(contador1>contador2){
            cont=1;
            i=-1;
        }else if(contador2>contador1){
            cont=2;
            i=-1;
        }
    }
    cout<<"El numero mayor es el "<<cont <<endl;
}