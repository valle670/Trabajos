#include <iostream>

using namespace std;

int main()
{
	int nota;
	
	cout << "Ingrese la nota del estudiante: " << endl;
	cin >> nota;
	
	if (nota == 100){
		
		cout << "Su calificacion es: S(A++)	 " << endl; 
	}else if (nota >= 95 && nota <= 99){
		
		cout << "Su calificacion es: A+		 " << endl;
		
	}else if (nota >= 90 && nota <= 94){
		
		cout << "Su calificacion es: A	 " << endl;
		
	}else if (nota >= 85 && nota <= 89){
		
		cout << "Su calificacion es: A-		 " << endl;
		
	}else if (nota >= 80 && nota <= 84){
		
		cout << "Su calificacion es: B+		 " << endl;
		
	}else if (nota >= 75 && nota <= 79){
		
		cout << "Su calificacion es: B		 " << endl;
		
	}else if (nota >= 70 && nota <= 74){
		
		cout << "Su calificacion es: B-	 " << endl;
		
	}else if (nota >= 65 && nota <= 69){
		
		cout << "Su calificacion es: 	 " << endl;
		
	}else if (nota >= 60 && nota <= 64){
		
		cout << "Su calificacion es: C	 " << endl;
		
	}else if (nota >= 55 && nota <= 59){
		
		cout << "Su calificacion es: C-	 " << endl;
		
	}else if (nota >= 50 && nota <= 54){
		
		cout << "Su calificacion es: D+		 " << endl;
		
	}else if (nota >= 45 && nota <= 49){
		
		cout << "Su calificacion es: D	 " << endl;
		
	}else if (nota >= 40 && nota <= 44){
		
		cout << "Su calificacion es: D-	 " << endl;
		
	}else if (nota >= 35 && nota <= 39){
		
		cout << "Su calificacion es: E+	 " << endl;
		
	}else if (nota >= 30 && nota <= 34){
		
		cout << "Su calificacion es: E	 " << endl;
		
	}else if (nota >= 25 && nota <= 29){
		
		cout << "Su calificacion es: E-		 " << endl;
		
	}else if (nota >= 20 && nota <= 24){
		
		cout << "Su calificacion es: F+		 " << endl;
		
	}else if (nota >= 15 && nota <= 19){
		
		cout << "Su calificacion es: F		 " << endl;
		
	}else if (nota >= 10 && nota <= 14){
		
		cout << "Su calificacion es: F	 " << endl;
		
	}else if (nota >= 5 && nota <= 9){
		
		cout << "Su calificacion es: F-	 " << endl;
		
	}else if (nota >= 0 && nota <= 4){
		
		cout << "Su calificacion es: F--	 " << endl;
		
	}
	




  return 0;
}

