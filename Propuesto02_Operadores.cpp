#include <iostream>

using namespace std;

int main(){
	cout<<"Ingrese 03 notas de un Alumno"<<endl;
	double nota1, nota2, nota3, promedio;
	cout<<"Ingrese Nota 1"<<endl;
	cin>>nota1;
	cout<<"Ingrese Nota 2"<<endl;
	cin>>nota2;
	cout<<"Ingrese Nota 3"<<endl;
	cin>>nota3;
	promedio = (nota1 + nota2 + nota3)/3; //Parentesis Necesarios
	cout<<"El promedio del Alumno es : "<<promedio<<endl;
	return 0;
}
