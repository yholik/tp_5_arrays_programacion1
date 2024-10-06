#include <iostream>
using namespace std;

int main(){

float notas[3][4], prom, suma;
int f, c;
suma = 0;
prom = 0;
	
	cout << "Cargue las calificaciones de cuatro materias de un alumno para obtener su promedio y "
	 << " luego continue con el siguiente alumno:" << endl;
	
	for(f = 0; f < 3; f++){
		for(c = 0; c < 4; c++){
			cout << "Ingrese la calificacion numero " << c + 1 << " del alumno " << f + 1 << ": ";
			cin >> notas[f][c];
			suma = suma + notas[f][c];
			prom = suma / 4;
		if(c == 3){
			cout << endl;
			cout << "El promedio del estudiante " << f + 1 << " es " << prom << endl;
			cout << endl;
			//Reiniciamos el acumulador cuando obtenemos el promedio
			suma = 0;
		}
		}
	}
	
return 0;
}
