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
void PrintStringPermutations(string &str)
{
    std::sort(str.begin(), str.end(), std::greater<>());

    do
    {
        cout << str << endl;
    } while (std::prev_permutation(str.begin(), str.end()));
}

int main()
{
    string str;
    str = "CABBADE"; // cuando este terminado hago un cin>>
    int contador = 0;
    int longitud = str.length() - 1;
    string intermedio = "";
    string resultadoStr = "";
    int resultadoLongitud = 0;
    while (longitud != 0)
    {
        while (contador < longitud)
        {
            intermedio = str.substr(contador, longitud);
            //cout << intermedio << endl;
            if (isPalindromo(intermedio) && resultadoLongitud < intermedio.length())
            {
                resultadoStr = intermedio;
                resultadoLongitud=intermedio.length();
            }
            contador++;
        }
        while (contador > longitud)
        {
            intermedio = str.substr(contador, longitud);
            ///cout << intermedio << endl;
            if (isPalindromo(intermedio) && resultadoLongitud < intermedio.length())
            {
                resultadoStr = intermedio;
                resultadoLongitud=intermedio.length();
            }
            contador--;
        }
        longitud--;
        contador = 0;
    }
    cout << resultadoStr << endl;
}