#include <iostream>
#include <string>

int main(){
    int num1, num2, num3;
    std::cout<<"Ponme el primer numero..."<<std::endl;
    scanf("%d",&num1);
    std::cout<<"Ponme el segundo numero..."<<std::endl;
    scanf("%d",&num2);
    std::cout<<"Ponme el tercer numero..."<<std::endl;
    scanf("%d",&num3);
    bool cond1=num1<num2;
    bool cond2= num1==num3;
    if(cond1 && cond2){
        std::cout<< "coincide la condicion"<<std::endl;
    }else{
        std::cout<< "no coincide"<<std::endl;
    }


}
