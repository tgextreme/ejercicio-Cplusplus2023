#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>



using namespace std;

int hola[20];

bool isNarcisista(int numero){
    string numero_str=to_string(numero);
    string intermedio="";

    
    int numeroCaracteres=numero_str.length();
    int interNum=0;
    int total=0;
    for(int i = 0; i < numero_str.length(); i++){
        intermedio=numero_str.at(i);
        
        interNum=stoi(intermedio);
        //cout<< interNum<<endl;;
        interNum=pow(interNum,numeroCaracteres);
        total=total+interNum;
    }
    //cout<< total<<endl;;
    if(numero==total){
        return true;
    }else{
       return false;
    }


return true;

}

int main(){

for(int i = 0; i <=50000;i++){
   // int narc;
    /*cout<<"Digame un numero narcisista"<<endl;
    cin>>narc;*/

    if(isNarcisista(i)){
        cout<<"Es narcisista "<<i<<endl;
    }/*else{
        printf("No es narcisista");
    }*/

}

}