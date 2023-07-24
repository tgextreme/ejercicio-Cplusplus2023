#include <iostream>
#include <string>

using namespace std;

string Reverse(int numero)
{
    string str = to_string(numero);
    string intermedio = "";
    int contar = 0;
    string caracter = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        caracter = to_string(i);
        // switch(str.at(i)){
        if (str.at(i) == '9')
        {
            intermedio = intermedio + "9";
        }

        if (str.at(i) == '8')
        {
            intermedio = intermedio + "8";
        }

        if (str.at(i) == '7')
        {
            intermedio = intermedio + "7";
        }

        if (str.at(i) == '6')
        {
            intermedio = intermedio + "6";
        }

        if (str.at(i) == '5')
        {
            intermedio = intermedio + "5";
        }

        if (str.at(i) == '4')
        {
            intermedio = intermedio + "4";
        }

        if (str.at(i) == '3')
        {
            intermedio = intermedio + "3";
        }

        if (str.at(i) == '2')
        {
            intermedio = intermedio + "2";
        }

        if (str.at(i) == '1')
        {
            intermedio = intermedio + "1";
        }

        if (str.at(i) == '0')
        {
            intermedio = intermedio + "0";
            // break;
        }
        //}
    }
    return intermedio;

    contar++;
}

int main()
{
    int numero = 3529;
    string desc = Reverse(numero);
    cout << desc << endl;
    int contar = 0;
    string num = to_string(numero);
    string numeros = "9876543210";
    string intermedio = "";
    
    for (int j = 0; j < numeros.length() ; j++)
    {
        cout << numeros.at(j) << endl;
        for (int i = 0; i < num.length() ; i++)
        {
            cout<< numeros[j] <<" "<< num[i] << endl;
            if (numeros[j] == num[i])
            {
                cout << "entro" << endl;
                intermedio = intermedio + num.at(i);
                i=num.length()+1;
            }
        }
    }
    cout << intermedio << endl;
}