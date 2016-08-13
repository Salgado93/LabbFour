#include "TrianguloPascal.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::setprecision;


int main(int argc,char* argv[]){
	int opcion = 0;
	while(opcion != 3){
		cout << endl;
		cout << "      Menu    " << endl;
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Salir!!" << endl;
		cin >> opcion;
		if(opcion == 1){
			cout << "Ejercicio 1" << endl;
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
			int cocientes[grado];
			for(int i = grado; i>=0; i--){
				if(i == grado){
					cocientes[i] = coeficientes[i];
					i--;	
				}
				
				cocientes[i] = a*cocientes[i+1]+coeficientes[i];
				
				
			}
			cout << "El Cociente Es: " ;
			for(int i = grado; i>=0; i--){
				if(i == 1){
					cout << cocientes[i] << endl;
					break;
				}
                                cout << cocientes[i] << "x^" << i-1 << " + " ;
                        } 
			cout << "El Residuo Es: " << cocientes[0] << endl;
			cout << "-----------------------------" << endl;
			for(int i = grado; i>=0; i--){
				if (i == 0){
					cout << setw(4) << fixed << setprecision(2) <<  coeficientes[i] << "|" << a;
				}else{
                               	cout << setw(4) << fixed << setprecision(2) <<  coeficientes[i];            
				} 			
			}
		}
		if(opcion == 2){
			cout << "Ejercicio 2" << endl;
			int lineas;
			
			cout << "Ingrese El Numero De Lineas Del Triangulo Pascal: " << endl;
			cin >> lineas;
			TrianguloPascal triangulo(lineas);
			triangulo.imprimir();			
		
		}
	}
		
		
	return 0;


}

int cociente(int coeficiente,int a){
	
}
