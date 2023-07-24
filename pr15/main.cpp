#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	bool primo=true;
	 int numero=2;
	const int MAX_PRIM=10;
	int numerosPrimos[MAX_PRIM];
	int divisior=2;
	int i;
	bool esPrimo=true;
	int contador=0;
	while (primo){
		
		for(i=2;i<numero;i++){
			if(numero%i==0){
				esPrimo=false;
			}
		}
		
		if(esPrimo){
			numerosPrimos[contador]=numero;
			contador++;
			//printf("Es primo %i",numero);
		}
		if(contador==MAX_PRIM){
			primo =false;
		}
		esPrimo=true;
		numero++;
		
		
	}
	for(i=0;i<MAX_PRIM;i++){
		printf("el numero primo numero %i es %i\n\n", i+1,numerosPrimos[i]);
	}
	
	
	
	
	return 0;
}
