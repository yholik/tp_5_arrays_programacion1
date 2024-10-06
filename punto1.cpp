#include <iostream>
using namespace std;

int main(){

	int edades[6], total;
	float prom = 0;
	total = 0;
	
	cout << "Guarde 5 edades para obtener el promedio total" << endl;
	
	for(int i = 0; i < 5 ; i++){
		cout << "Ingrese edad en posicion " << i << endl;
		cin >> edades[i];
		total = total + edades[i];
	}
	
	prom = total / 5;
	
	cout << "Promedio total de las edades ingresadas: " << prom;
	
return 0;

}
