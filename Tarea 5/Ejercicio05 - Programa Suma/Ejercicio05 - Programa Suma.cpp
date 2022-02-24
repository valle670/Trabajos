#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	
	int a = 10;
	int b = 12;
	int resultado;
	
	cout << " Ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << " Ingrese el valor de b: ";
	cin >> b;
	
	cout << endl;
	
	resultado = a + b;
	
	cout << " La suma de a + b es de: " << resultado;
	
	return 0;
}
