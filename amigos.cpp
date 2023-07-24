#include <iostream>
#include <string>
using namespace std;

void isAmigo(int numero)
{
    int suma1 = 0;
    int suma2 = 0;

    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            suma1 = suma1 + i;
        }
    }//D1

    for (int i = 1; i < suma1; i++)
    {
        if (suma1 % i == 0)
        {
            suma2 = suma2 + i;
            //cout<<suma2<<endl;
        }
    }//D2
    if(suma2==numero&&suma2!=suma1){
        cout <<numero<< " es amigo de "<<suma1<<endl;
    }
    //cout<<numero<< " "<<suma1 << " "<<suma2<<endl;
}

int main()
{
    for (int i = 1; i <2285;i++){
    isAmigo(i);
    
    }
}