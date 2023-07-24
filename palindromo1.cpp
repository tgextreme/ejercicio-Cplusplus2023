#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindromo(string str)
{

    string reves = str;
    reverse(reves.begin(), reves.end());
    if (str == reves)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    str = "CABBADE"; // cuando este terminado hago un cin>>
    /*int numMax;
    string resultado = "";
    string intermedio = "";
    int contador = 0;
    bool repetir = true;
    string intermedioI = "";
    int numMaxI;
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = 0; j < str.length() - 1; j++)
        {
            // cout<<"entro bucle"<<endl;
            if (isPalindromo(intermedio + str.at(j)))
            {
                // cout<<"entro bucle"<< intermedio<<endl;

                intermedio = intermedio + str.at(j);
                if (numMax < intermedio.length())
                {
                    numMax = intermedio.length();
                    resultado = intermedio;
                }
                intermedioI=intermedio;
                while (numMax > 2 && repetir == true && contador < str.length() * 2)
                {
                    for (int o; o < str.length() - 1; o++)
                    {
                        if(isPalindromo(intermedioI + str.at(o))){
                         intermedioI = intermedioI + str.at(o);
                        }
                    }
                    contador++;
                }
                cout << "entro bucle palindromo" << intermedio << endl;
            }
            else
            {
                intermedio = "";
                // cout<<"entro bucle sin palindromo"<< intermedio<<endl;
            }
        }
    }
    cout << resultado << " " << numMax << endl;*/
}