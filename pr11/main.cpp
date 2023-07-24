#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1, num2, resultado;
	char opcion1, opcion2;

	
	char SALIR='X';
	char ADICION='A';
	char SUMAR='S';
	char RESTA='R';
	char PRODUCTO='P';
	char MULTIPLICACION='M';
char DIVISION='D';
char RESTO='R';
	
	do {
		cout<<" A. Calcular adición \n"<<endl;
		cout<<" P. Calcular producto \n"<<endl;
		cout<<" X. Salir \n"<<endl;
		cin>>opcion1;
		if(opcion1==ADICION){
			printf("S Calcular suma\n");
			printf("R Calcular resta\n");
			printf("X para salir");
			cin>>opcion1;
			if(opcion1==SUMAR){
				cout<<"Digame el primer numero"<<endl;					
				cin>>num1;	
				cout<<"Digame el segundo numero"<<endl;
				cin>>num2;
				cout<<"El resultado es "<< (num1 + num2)<<endl;
			}else if(opcion1==RESTA){
				cout<<"Digame el primer numero"<<endl;					
				cin>>num1;	
				cout<<"Digame el segundo numero"<<endl;
				cin>>num2;
				cout<<"El resultado es "<< (num1 - num2)<<endl;
			
			}
			
		}else if(opcion1==PRODUCTO){
			printf("M Calcular multiplicacion\n");
			printf("D Calcular division entera\n");
			printf("R Calcular resto\n");
			printf("X para salir");
			cin>>opcion1;
			if(opcion1==MULTIPLICACION){
				cout<<"Digame el primer numero"<<endl;					
				cin>>num1;	
				cout<<"Digame el segundo numero"<<endl;
				cin>>num2;
				cout<<"El resultado es "<< (num1 * num2)<<endl;
			}else if(opcion1==DIVISION){
				cout<<"Digame el primer numero"<<endl;					
				cin>>num1;	
				cout<<"Digame el segundo numero"<<endl;
				cin>>num2;
				cout<<"El resultado es "<< (num1 / num2)<<endl;
			
			}else if(opcion1==RESTO){
				cout<<"Digame el primer numero"<<endl;					
				cin>>num1;	
				cout<<"Digame el segundo numero"<<endl;
				cin>>num2;
				cout<<"El resultado es "<< (num1 % num2)<<endl;
			
			}
			
		}
		
		
	}while(opcion1!=SALIR);
	
	
	
	
	return 0;
}
