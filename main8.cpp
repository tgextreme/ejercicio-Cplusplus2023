#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double a, b, c, raiz, op1, op2;
    cout << "Dígame variable a" << endl;

    cin >> a;
    cout << "Dígame variable b" << endl;
    cin >> b;
    cout << "Dígame variable c" << endl;
    cin >> c;
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