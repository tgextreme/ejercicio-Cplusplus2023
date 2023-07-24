#include <iostream>
#include <string>

using namespace std;

void retornarNumero(int num1, int num2, int numComp)
{
    int num1n, num2n;
    string cN1, cN2;
    cN1 = to_string(num1);
    cN2 = to_string(num2);
    num1n = 0;
    num2n = 0;

    for (int i = 0; i < cN1.size()-1; i++)
    {
        cout<<" primer array "<<cN1.at(i)<<endl;
        if (atoi( cN1.at(i)+"") == numComp)
        {
            num1n++;
        }
    }
    for (int i = 0; i < cN2.size()-1; i++)
    {
        cout<<" segundo array "<<cN2.at(i)<<endl;
        if (atoi(cN2.at(i)+"") == numComp)
        {
            num2n++;
        }
    }
    if (num1n > num2n)
    {
        cout<<"el primero es mayor que  el segundo"<< endl;

    }
    else if (num1n < num2n)
    {
        cout<<"el segundo es mayor que el primero"<< endl;
    }
    else
    {
        numComp--;
        if(numComp>=0){
        retornarNumero(num1, num2, numComp);
        }else{
            cout<<"son iguales"<< endl;
        }
        // resto uno y llamo a función
    }
}

int main()
{
    
    int num1, num2, mayor;

    cout << "Dime el numero 1" << endl;
    cin >> num1;
    cout << "Dime el numero 2" << endl;
    cin >> num2;
    retornarNumero(num1, num2, 9);
}