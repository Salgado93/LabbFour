#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char* argv[]){
	int opcion = 0;
	while(opcion != 3){
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Salir" << endl;
		cin >> opcion;
		if(opcion == 1){
			int grado;
			int a;
			cout << "Ingrese El Grado Mas Alto Del Polinomio: " << endl;
			cin >> grado;
			int coeficientes[grado];
			for(int i=grado; i>=0; i--){
				cout << "Ingrese El Polinomio x^" << i << endl;
				cin >> coeficientes[i];
				
			}
			cout << "Ingrese a: " << endl;
			cin >> a;
			int suma;
			int mult;
			for(int i = grado; i>=grado; i--){
				
			}	
		}
	}
		
	
	return 0;


}

int cociente(int coeficiente,int a){
	
}
