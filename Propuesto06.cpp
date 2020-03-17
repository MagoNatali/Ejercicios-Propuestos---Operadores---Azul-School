#include <iostream>

using namespace std;

int main(){
	cout<<"Dos personas ganan entre los 2 un total de $3,000."<<endl;
	int sueldoP1=0, sueldoP2=0;
	sueldoP1 = (3000 + 500)/2;
	sueldoP2 = 3000 - sueldoP1;
	cout<<"El suedo de la Persona 1 es de: "<<sueldoP1<<
		" y el sueldo de la Persona 2 es de: "<<sueldoP2<<endl;
	return 0;
}
