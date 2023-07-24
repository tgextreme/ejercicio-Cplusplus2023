#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string str1;
    cout<<"Dígame la variable"<<endl;
    cin>>str1;
    string reves = str1;
    reverse(reves.begin(), reves.end());    
    if (str1== reves)
    {
        printf("Es palindromo");
    }else{
        printf("No es palindromo");
    }
}