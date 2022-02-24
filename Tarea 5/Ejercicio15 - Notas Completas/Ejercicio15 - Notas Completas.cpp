
#include  <iostream> 
#include  <math.h>

using namespace std;

int main()
{
	float nota = 0;
	
	cout<<" Ingrese la nota del estudiante: " << endl;
	cin >> nota;
	
	if (nota > 100 || nota < 0) 
	{
	cout << " Posibilidades validas del 0 al 100 " << endl;
	
	}
	else
	if (nota == 100) 
	{
		cout << " Resultado recibido una A++ " << endl; 
	}
	else
	if (nota >= 95 && nota <= 99)
	{
		cout << " Resultado recibido una A+ " << endl;
	}
	else
	if (nota >= 90 && nota <= 94)
	{
		cout << " Resultado recibido una A " << endl;
	}
	else
	if (nota >= 85 && nota <= 89)
	{
		cout << " Resultado recibido una A- " << endl;
	}
	else
	if (nota >= 80 && nota <= 84)
	{
		cout << " Resultado recibido una B+ " << endl;
	}
	else
	if (nota >= 75 && nota <= 79)
	{
		cout << " Resultado recibido una B " << endl;
	}
	else
	if (nota >= 70 && nota <= 74)
	{
		cout << " Resultado recibido una B- " << endl;
	}
	else
	if (nota >= 65 && nota <= 69)
	{
		cout << " Resultado recibido una C+ " << endl;
	}
	else
	if (nota >= 60 && nota <= 64)
	{
		cout << " Resultado recibido una C " << endl;
	}
	else
	if (nota >= 55 && nota <= 59)
	{
		cout << " Resultado recibido una C- " << endl;
	}
	else
	if (nota >= 50 && nota <= 54)
	{
		cout << " Resultado recibido una D+ " << endl;
	}
	else
	if (nota >= 45 && nota <= 49)
	{
		cout << " Resultado recibido una D " << endl;
	}
	else
	if (nota >= 40 && nota <= 44)
	{
		cout << " Resultado recibido una D- " << endl;
	}
	else
	if (nota >= 35 && nota <= 39)
	{
		cout << " Resultado recibido una E+ " << endl;
	}
	else
	if (nota >= 30 && nota <= 34)
	{
		cout << " Resultado recibido una E " << endl;
	}
	else
	if (nota >= 25 && nota <= 29)
	{
		cout << " Resultado recibido una E- " << endl;
	}
	else
	if (nota >= 20 && nota <= 24)
	{
		cout << " Resultado recibido una F+ " << endl;
	}
	else
	if (nota >= 15 && nota <= 19)
	{
		cout << " Resultado recibido una F " << endl;
	}
	else
	if (nota >= 10 && nota <= 14)
	{
		cout << " Resultado recibido una F " << endl;
	}
	else
	if (nota >= 5 && nota <= 9)
	{
		cout << " Resultado recibido una F- " << endl;
	}
	else
	if (nota >= 0 && nota <= 4)
	{
		cout << " Resultado recibido una F-- " << endl;
	}
		
	return 0;
}
