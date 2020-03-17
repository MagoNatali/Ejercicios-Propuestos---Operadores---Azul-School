#include <iostream>
#include <math.h>
using namespace std;

int main(){
	cout<<"Calcular el Area de la Siguiente Figura"<<endl;
	double radioCirculo = 10.0, alturaTriangulo = 13.0, PI = 3.1416;
	double areaSemicirculo = 0, areaTriangulo = 0, baseTriangulo = 0;
	double areaTotalDeLaFigura = 0;
	//Calculando el Area del Semicirculo
	areaSemicirculo = (PI * pow(radioCirculo,2))/2;
	//Calculando el Area del Triangulo
	baseTriangulo = 2*radioCirculo;
	areaTriangulo =  (baseTriangulo * alturaTriangulo)/2;
	//Calculando el Area Total de la Figura
	areaTotalDeLaFigura = areaSemicirculo + areaTriangulo;
	cout<<"El area Total de la Figura es: "<<areaTotalDeLaFigura<<endl;
	return 0;
}
