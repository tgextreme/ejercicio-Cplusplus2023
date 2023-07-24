#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	double notas[10];
	notas[0]=10;
	notas[1]=10;
	notas[2]=10;
	notas[3]=10;
	notas[4]=3;
	notas[5]=10;
	notas[6]=10;
	notas[7]=5;
	notas[8]=10;
	notas[9]=10;
	double media=0.0;
	
	for(i=0;i<10;i++){
		media+= notas[i];
	}
	media=media/10;
	cout<<media<<endl;
	

	
	
	return 0;
}
