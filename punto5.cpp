#include <iostream>
using namespace std;

int main(){
	int mayor, i, j, matriz[4][4];
	
	cout << "Matriz de 4x4, buscara el valor maximo de los elementos ingresados" << endl;
	cout << endl;
	
	for(i = 0 ; i < 4; i++){
		for( j = 0; j < 4; j++){
			cout << "Ingrese valor en fila " << i + 1 << " columna " << j + 1 << ": ";
			cin >> matriz[i][j];
			if(i == 0 && j == 0){
				mayor = matriz[i][j];
			}
			if(matriz[i][j] > mayor){
				mayor = matriz[i][j];
			}
		}
	}
	
	cout << "El valor maximo es: " << mayor << endl;
	
return 0;
}
