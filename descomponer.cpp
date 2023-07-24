#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Digame un número"<<endl;
    //scanf("%d",&numero);
    cin>>numero;
    int intermedio;
    int divisor=2;
    intermedio=numero;
    while(divisor!=intermedio){
        //printf("%i \n", divisor);
        
        if(numero%divisor==0){
            printf("%i ", divisor);
            numero=numero/divisor;
            divisor=2;
        }else{
            
            divisor++;
        }
        



    }








}