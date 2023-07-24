#include <iostream>

using namespace std;

int main()
{
    char arr[] = {' ', 'a', 'h', ' ', ' ', ' ', 'c',' '};

    
   
    for (int i = 0; i < sizeof(arr); i++) // saber tamaño array
    {
        if(!(arr[i]==arr[i-1]&&arr[i-1]==' '&&arr[i]==' '&&i>0) ){
            cout << "el numero es " << arr[i] << endl;
        }
        
    }
}