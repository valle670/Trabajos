#include <iostream>

using namespace std;

int main()
{
	double subtotal, descuento, total, totalPagar;
	char exenta;
	
	cout << "Ingrese el subtotal de la factura: " << endl;
	cin >> subtotal;
	
	cout << "Ingrese el descuento: " << endl;
	cin >> descuento;
	
	cout << "Es factura exenta? escriba S o N: " << endl;
	cin >> exenta;
	
	total = subtotal - (subtotal * descuento)/100;
	
	if (exenta == 's' || exenta == 'S'){
		
		
		cout << "Su total es: " << total << endl;
		
	} else {
		
		totalPagar = total + total * 0.15;
		
		cout << "Total a pagar es: " << totalPagar;
	
		
	}
	


  return 0;
}

