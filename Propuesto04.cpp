#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double lado = 5.0,area1,area2;
	area1 = lado*lado;
	area2 = pow(lado,2);//Utilizando la Libretia Math.h
	cout<<"El area del Cuadrado es: "<<area1<<" metros cuadrados"<<endl;
	cout<<"El area del Cuadrado es: "<<area2<<" metros cuadrados"<<endl;
	return 0;
}
