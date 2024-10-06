#include <iostream>
using namespace std;

int main(){
	int numeros[10];
	cout << "Almacene 10 numeros para imprimirlos en orden inverso" << endl;
	
	for(int i = 0; i <= 9; i++){
		cout << "Ingrese un numero en la posicion " << i + 1 << ": " ;
		cin >> numeros[i];
	}
	
	//Imprime en sentido inverso linea por linea
	for(int i = 9; i >= 0; i--){
		cout << "Numero en la posicion " << i  + 1 << " :" << numeros[i] << endl;
	}
	
	//Imprime todos los numeros en sentido inverso, en una sola linea, separados por coma
	for(int i = 9; i >= 0; i--){
		cout << numeros[i];
		
		//Este if imprimira una coma entre cada numero a excepcion del ultimo numero.
		if(i <= 10 - 1 && i != 0){
			cout << ", ";
		}
	}

return 0;
}
