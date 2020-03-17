#include <iostream>

using namespace std;

int main(){
	cout<<"Ingrese 03 Notas de un Estudiante"<<endl;
	double notaPracticas,notaTeorica,notaParticipacion,promedio;
	cout<<"Ingrese Nota de Practicas (30% del Promedio Final)"<<endl;
	cin>>notaPracticas;
	cout<<"Ingrese Nota Teorica (60% del Promedio Final)"<<endl;
	cin>>notaTeorica;
	cout<<"Ingrese Nota de Participacion (10% del Promedio Final)"<<endl;
	cin>>notaParticipacion;
	promedio = (notaPracticas * 0.3) + (notaTeorica * 0.6) + (notaParticipacion*0.1);//No es necesario Parentesis
	cout<<"La nota Promedio del Alumno es: "<<promedio<<endl;
	return 0;
}
