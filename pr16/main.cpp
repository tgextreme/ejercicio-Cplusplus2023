#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	int minimo=0, maximo=0;
	int numeros[20];
	numeros[0]=1;
	numeros[1]=32;
	numeros[2]=2;
	numeros[3]=3;
	numeros[4]=6;
	numeros[5]=10;
	numeros[6]=2;
	numeros[7]=1;
	numeros[8]=2;
	numeros[9]=2;
	numeros[10]=2;
	
	numeros[11]=2;
	numeros[12]=2;
	numeros[13]=2;
	numeros[14]=2;
	numeros[15]=2;
	numeros[16]=2;
	numeros[17]=2;
	numeros[18]=2;
	numeros[19]=2;
	minimo=numeros[0];
	maximo=numeros[0];
	for(i=0;i<20;i++){
		if(minimo>numeros[i]){
			minimo=numeros[i];
		}
		if(maximo<numeros[i]){
			maximo=numeros[i];
		}
	}
	cout<<"El numero maximo es "<<maximo<<endl;
	cout<<"El numero minimo es "<<minimo<<endl;
	
	
	return 0;
}
