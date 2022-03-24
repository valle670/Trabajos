#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	float x, raizCuadrada = 0;
	
    cout << " Calcule la raiz cuadrada de un numero dado "<< endl;
    cout << " Ingrese el valor de x: ";
	cin >> x;
	 
	raizCuadrada = sqrt (x);
	
	cout << " \n La raiz cuadrada de X es de: " << raizCuadrada << endl;

  return 0;
}

