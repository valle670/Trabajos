
#include <iostream>

#include<math.h>

using namespace std;


int main () 
{
	int numero = 0, total = 0, pares = 0, impares = 0;
	
	cout << " Ingrese 10 numeros enteros " << endl;	
	
	for ( numero =0; numero <= 10; numero++)
	{
		cout << " \n Dijite el " << numero << " numero " << endl;
		cin >> numero;
		 
		if ( numero % 2 == 0 )
		{
			pares = pares + numero;	
		}
		else
		   if ( numero % 2 == 1)
		{
			impares = impares + numero;
		}	
		
		total = pares + impares;
		cout << numero << "  " ;	
	}	
	    
		cout << endl;
		cout << " \n La cantidad de numeros que son Pares es de: "   << pares   << endl;	
		cout << " La cantidad de numeros que son Impares es de: "    << impares << endl;	
		cout << " La cantidad sumatoria es de: " << total << endl;
		
	return 0;
}
