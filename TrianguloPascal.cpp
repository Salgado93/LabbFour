#include "TrianguloPascal.h"
#include <iostream>
#include <string>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

TrianguloPascal::TrianguloPascal(int lineas):lineas(lineas){
}

void TrianguloPascal::imprimir (){
	int val=0;
	for (int i = 0; i < lineas; i++){ 
            for (int j = 1; j < (lineas - i); j++){
                cout << " ";
            }
	    val= 1; 
            for (int k = 0; k <= i; k++){
		if(val%2==0){
			cout << " 0";
		}
		else{i
			cout << " *";
		}
                
                val = val * (i - k) / (k + 1);
                
                }
            cout << endl;
        }
}


int TrianguloPascal::numdigits(int x)
{
    int count = 0;
    while(x != 0) {
        x = x / 10;
        ++count;
    }
    return count;
}



