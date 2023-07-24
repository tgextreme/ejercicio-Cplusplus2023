/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
//
//
// SESI�N 12
//
/*   Programa que calcula el precio final de un producto a partir de su precio
	inicial, de un incremento fijo mensual y de un número de meses con ayuda
	de la clase Dinero

	Entrada : Precio, incremento fijo mensual y número de meses
	Salida : Precio del producto mes a mes
*/
/***************************************************************************/

/****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;


/****************************************************************************/
class GestorNumerosSecuenciables{
	
	private:
		
		static const int TAMANIO = 100;
		int secuencias[TAMANIO];
		int valor; 	// PRE: 1 <= valor
	
	public:
	
		/*******************************************************************/
		/*******************************************************************/
		// Constructores
		
		GestorNumerosSecuenciables ()  
			: valor (0) 
		{}
			
		GestorNumerosSecuenciables (int n) 
			: valor (n) 
		{}
		
		/*******************************************************************/
		/*******************************************************************/
		// Get/Set triviales
		void SetValor (int n){
			valor = n; 	
		}
		
		int GetValor (void){
			return (valor); 	
		}
		
		/*******************************************************************/
		/*******************************************************************/
		// Calcula y devuelve si un n�mero es secuenciable o no. 
		
		bool EsSecuenciable (void){	
			
			return (NumSecuencias() > 0);
		}
		
		/*******************************************************************/
		/*******************************************************************/
		// Calcula y devuelve el n�mero de secuencias de un n�mero secuenciable 
		//
		// PRE: EsSecuenciable() == true
	
		int NumSecuencias (){
		
			int ultimo_inicio = valor/2;   
			int cont_secuencias = 0; 
					
			for (int inicio = 1; inicio <= ultimo_inicio; inicio++){
				
				int suma  = inicio;  // suma inicial (primer valor de la sec.)
				int nuevo = inicio+1; 	// segundo valor de la sec. 
		
				// Mientras que la suma de la secuencia sea menor que "valor", 
				// seguir a�adiendo t�rminos consecutivos. 
				 
				while (suma < valor) {
					suma += nuevo; // Nueva suma
					nuevo++; // El nuevo t�rmino a considerar es el siguiente 
				}
				
				// Si "suma" es igual a "n" hemos encontrado una secuencia. 
				// Si no, la suma es necesariamente mayor.  
				if (suma == valor) cont_secuencias++;
			}
						
			return cont_secuencias;
		}
		
		/*******************************************************************/	
		/*******************************************************************/
		// Calcula los n�meros que conforman una secuencia y los devuelve en
		// un string
		// 
		// PRE: EsSecuenciable() == true
		
		int ConstruyeSecuencia (int i){
		
			int ultimo_inicio = valor/2;   
			int num = 0;
								
			for (int inicio = 1; inicio <= ultimo_inicio; inicio++){
				
				int suma  = inicio;  // suma inicial (primer valor de la sec.)
				int nuevo = inicio+1; 	// segundo valor de la sec. 
		
				// Mientras que la suma de la secuencia sea menor que "valor", 
				// seguir a�adiendo t�rminos consecutivos. 
				 
				while (suma < valor) {
					suma += nuevo; // Nueva suma
					nuevo++; // El nuevo t�rmino a considerar es el siguiente 
				}
				
				// Si "suma" es igual a "n" hemos encontrado una secuencia. 
				// Si no, la suma es necesariamente mayor.  
				
				if (suma == valor){
					
					// Guardamos el primer y �ltimo n�mero 
					// de la secuencia de descomposici�n
					secuencias[num] = inicio;
					secuencias[num+1] = nuevo;
					
					num += 2;	
				}
			}
			
			return secuencias[i];
		}
		/*******************************************************************/
};
/***************************************************************************/



/***************************************************************************/
/***************************************************************************/
int main ()	// Programa Principal
{
	
	int n1, n2; 
	int n_sec; 
	
	// Entrada (leer los extremos)
	
	do {
	    cout << "Introduzca un numero positivo: ";
    	cin >> n1;    	
	} while (n1<=0);

	do {
	    cout << "Introduzca otro numero positivo: ";
    	cin >> n2;    	
	} while (n2<=0);

	// Entrada (N�mero de secuencias)

	cout << endl; 
	do {
	    cout << "Introduzca numero de secuencias: ";
    	cin >> n_sec;    	
	} while (n_sec<=0);


	// Reajustar los extremos menor y mayor

    int extremo_menor, extremo_mayor;	
	
	if (n1<n2) {
		extremo_menor = n1;
		extremo_mayor = n2;	
	}
	else {
		extremo_menor = n2;
		extremo_mayor = n1;			
	}

	cout << endl; 
	cout << "Calculando numeros secuenciables entre " << setw(3) 
	     << extremo_menor << " y " << setw(3) << extremo_mayor << " con " 
		 << n_sec << " secuencias "<< endl; 
	cout << endl; 
	
	cout << "................................................" << endl; 
	cout << endl; 

	

	GestorNumerosSecuenciables g;
	
	// C�lculos y resultado 

	// 1. Calcular total de n�meros secuenciables 

	cout << endl; 
	cout << "1. Total de numeros secuenciables." << endl; 	
	cout << endl; 
		 	
	int contador_secuenciables = 0; 
	
	for (int n=extremo_menor; n<=extremo_mayor; n++) {
	
		g.SetValor(n); // Cambiar el valor objeto del c�lculo 
		
		if (g.EsSecuenciable())	contador_secuenciables++;	
	}
	
	cout << "\tSe han encontrado " << setw(3) << contador_secuenciables 
	     << " numeros secuenciables." << endl; 
	cout << endl; 
	
	// 2. Mostrar numeros secuenciables y el n�mero de secuencias
	
	cout << endl; 
	cout << "2. Los numeros secuenciables y el numero de secuencias." << endl; 	
	cout << endl; 

	for (int n=extremo_menor; n<=extremo_mayor; n++) {
		
		g.SetValor(n); // Cambiar el valor objeto del c�lculo 
		
		if (g.EsSecuenciable())	 {
		   	cout << "\t" << setw(3) << g.GetValor() << " es secuenciable. ";	
	    	cout << "(" << g.NumSecuencias() << " secuencias)" << endl;
		}
	  	else 
		   	cout << "\t" << setw(3) << g.GetValor()  
			     << " NO es secuenciable." << endl;	
	}
	cout << endl;
	
	
	
	// 3. Mostrar numeros secuenciables cuyo n�mero de secuencias 
	// 	  coincida con el valor pedido y el total.  
	
	cout << endl; 
	cout << "3. Numeros secuenciables con " << 
	     setw(2) << n_sec << " secuencias:" << endl; 		
	cout << endl;
	
	int contador = 0; 
	
	
	for (int n=extremo_menor; n<=extremo_mayor; n++){
		
		g.SetValor(n); // Cambiar el valor objeto del c�lculo 
		
		int j = 0;	// Lo ponemos a 0 cada vez que obtenemos un nuevo valor
					// y buscamos su desomposici�n en secuenciables
		
		if (g.EsSecuenciable()){
		
			int num_secuencias_calculadas = g.NumSecuencias();

			if (num_secuencias_calculadas == n_sec) {
				
			    contador++;
			
				cout << "\t" << setw(3) << contador << " --> " << setw(3) 
					 << g.GetValor() << " (" << setw(2) 
					 << num_secuencias_calculadas << " secuencias)" << endl;
				
				while (j < 2*n_sec){
				
					cout << "\t" << g.GetValor() << " = ";
					
					for (int u = g.ConstruyeSecuencia(j); 
						 u < g.ConstruyeSecuencia(j+1); u++){
						
						if (u < g.ConstruyeSecuencia(j+1)-1){
							cout << u << " + ";
						} 
						else{
							cout << u;
						} 
					}
					
					j += 2;
					cout << endl;
				}
			}
		}
	}



	cout << endl << endl;
			
	if (contador > 0){
		cout << "\tHay " << setw(3) << contador << " numeros con "
		     << n_sec << " secuencias" << endl; 
	}
	else{
		cout << "\tNo hay ningun numero con " << setw(3) << n_sec 
		     << " secuencias en el rango indicado." << endl;
	}
	
	cout << endl; 		


	return 0;
}
