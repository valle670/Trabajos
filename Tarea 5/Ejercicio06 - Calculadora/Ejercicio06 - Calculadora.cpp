#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main (){
	
	setlocale(LC_CTYPE, "Spanish");
	cout.precision (12);
	
	float numero1 = 0, numero2 = 0;
	float suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout << " Ingrese un numero ";
	cin >> numero1;
	
	cout << " \nIngrese un numero ";
	cin >> numero2;
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	cout << " \n La suma del numero 1 y del numero 2 es de: " << (suma) << endl;
	cout << " \n La resta del numero 1 y del numero 2 es de: " << (resta) << endl;
	cout << " \n La multiplicacion del numero 1 y del numero 2 es de: " << (multiplicacion) << endl;
	cout << " \n La division del numero 1 y del numero 2 es de: " << (division) << endl;
	
	system ("pause > null");
	
	return 0;
}

