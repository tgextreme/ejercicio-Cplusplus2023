#include <iostream>

int main(){
    int edad=38;

    

    if(edad<18){
        printf("No estamos interesados");
    }else if(edad<30){
        printf("Contratamos");
    }else if(edad<40){
        printf("No contratamos");
    }else if(edad>50){
        printf("Contratamos");
    }else{
        printf("Contrato eventual");
    }

}