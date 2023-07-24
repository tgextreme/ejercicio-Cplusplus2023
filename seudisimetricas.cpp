#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

string SubSecuencia(string str, int inicio, int max)
{


    string intermedio = str.substr(inicio, max);

    return intermedio;
}
bool EsSeudoSimetrica(string str1, string str2)
{
    // strcmp(str1, str2)==0 //char[]
    // if(str1.compare(str1)==0){ //para los strings

    //}
    int cont = str1.length();
    bool repetir = false;
    for (int i = 0; i < str1.length(); i++)
    {
        repetir = false;
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                repetir = true;
                str2[j] = '_';
                j = str2.length();
            }
        }
        if (repetir == false)
        {
            return false;
        }
    }

    return repetir;
}

int main()
{
    string str;
    cout << "Digame una palabra para que creas que sea seudometrica" << endl;
    cin >> str;

    int longitudMax = str.length();
    double douLongitud = ((double)longitudMax) / 2; // la mitad de la operacion
    int longitudPrim = (int)floor(douLongitud);     // la mitad de la operacion en entero
    string str1, str2;
    if (str.length() % 2 == 0)
    {
        str1 = SubSecuencia(str, 0, longitudPrim);
        str2 = SubSecuencia(str, longitudPrim, str1.length());
    }
    else
    {
        str1 = SubSecuencia(str, 0, longitudPrim);
        str2 = SubSecuencia(str, longitudPrim + 1, str1.length());
    }

   // cout << str1 << " " << str2 << endl;

    bool check = EsSeudoSimetrica(str1, str2);
    if (check)
    {
        cout << "Es simetrica" << endl;
    }
    else
    {
        cout << "NO es simetrica" << endl;
    }
    // cout << SubSecuencia(str, 0, 2) << endl;
}