#include <iostream>

using namespace std;

class Intervalo
{
private:
    int num1, num2;
    bool vacio = true;
    bool numAb1;
    bool numAb2;

public:
    Intervalo(){

    };
    // Intervalo(int numero1, int numero2, bool numAb1, bool numAb2){
    Intervalo(int numero1, int numero2, bool numA1, bool numA2)
    {
        num1 = numero1;
        num2 = numero2;
        numAb1 = numA1;
        numAb2 = numA2;
        vacio = false;
    };
    void getIntervalo()
    {
        if (!esVacio())
        {
            cout << num1 << " " << num2 << endl;
        }
        else
        {
            cout << "Esta vacio" << endl;
        }
    }
    bool esVacio()
    {
        return vacio;
    }

    bool checkNumero(int numero)
    {
        int min, max;
        if (num1 > num2)
        {
            min = num2;
            max = num1;
        }
        else
        {
            min = num1;
            max = num2;
        }
        if (numAb1)
        {
            if (num1 == numero)
            {
                return true;
            }
        }
        if (numAb2)
        {
            if (num2 == numero)
            {
                return true;
            }
        }
        if (numero > min && numero < max)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // Intervalo interv;
    //  interv.getIntervalo();
    // Intervalo int1(10, 15, true, false);
    /*if(int1.checkNumero(15)){
        cout<<"Esta en intervalo"<<endl;
    }*/
    bool vacio;

    int num1, num2, numck;

    bool terminar=false;

    while ((num1 != -1 && num2 != -1)&&terminar==false)
    {
        cin>>num1;
        if(num1==-1){
            terminar=false;
        }
        cin>>num2;
        cin>>numck;
        if( num2==-1){
            terminar=false;
        }
        Intervalo int1(num1, num2, true, true);
        if (int1.checkNumero(numck))
        {
            cout << "Esta en intervalo" << endl;
        }else{
            cout<<"NO esta en intervalo"<<endl;
        }
    };
}