#include <iostream>
using namespace std;
int main(){
    int i=0;
    int o=0;
    for(i = 0; i <10;i++){

        for(o=0;o<10;o++){
            cout<<i<<" * "<<o<<" = "<<(o*i)<<endl;
        }
        
    }

    int numero =50;

    while(numero%13){

        numero=numero+numero;


    }
    printf("%d\n",numero);
}
