#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const int ASIENTOS=5;
	string ocupantes[ASIENTOS];
	int i=0;
	for(i=0;i<ASIENTOS;i++){
		cout<<"Digame el nombre del pasajero del asiento "<<i<<endl;
		cin>>ocupantes[i];
	}
	for(i=0;i<ASIENTOS;i++){
		cout<<"El pasajero del asiento "<<i<<" se llama "<<ocupantes[i]<<endl;
	}
	
	return 0;
}
