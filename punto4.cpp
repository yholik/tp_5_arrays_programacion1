#include <iostream>
using namespace std;

int main(){
	int matriz[3][3], suma, i, j;
	
	cout << "Este programa suma los elementos de una matriz de 3 x 3" << endl;
	cout << endl;
	
	for(i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			cout << "Ingrese el elemento en la posicion fila " << i + 1 << " de la columna " << j + 1 << endl;
			cin >> matriz[i][j];
			suma = suma + matriz[i][j];
		}
	}
	
	cout << "El total de los elementos es: " << suma << endl;
	return 0;
}
