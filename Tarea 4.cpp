#include <iostream>
#include<math.h>

using namespace std;


int main () 
{
	int total = 1, par = 0, impar = 0;
	
	cout << "De los numeros del 1 al 10 la suma de sus pares e impares es de: " << endl << endl;	
	
	for ( int numero = 0; numero <= 10; numero++)
	{
		
		if ( numero % 2 == 0 )
		{
			par = par + numero;	
		}
		else if ( numero % 2 == 1)
		{
			impar = impar + numero;
		}	
		
		total = par + impar;
		cout << numero << " " ;	
	}	
	    
		cout << endl;
		cout << " \n La cantidad de numeros que son pares es de: "   << par   << endl;	
		cout << " La cantidad de numeros que son impares es de: "    << impar << endl;	
		cout << " La cantidad sumatoria es de: " << total << endl;
		
			
	return 0;
}



