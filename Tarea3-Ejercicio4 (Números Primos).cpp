#include <iostream>
using namespace std;
main(){

	// 4. Se ingresa un entero por teclado. Se desea determinar si el número ingresado es primo o no. Utilice bucles "while". 
	int n, x=1, acum=0, r;

	do{
	cout << "Ingrese el numero entero: ";
	cin >> n;
	
	while(x <= n)   
	{
		if (n%x==0){
			acum=acum+1;
		}
		x++;
	}
	
	if (acum > 2){
		cout << "El numero " << n << " no es primo " << endl;
	} 
	else {
		cout << "El numero " << n << " es primo " <<endl;
	}

cout << "////////////////////////////////////////// " << endl;
cout << "////////////////////////////////////////// " << endl;
cout << "¿Desea repetir el proceso? Digite 1 para 'SI' o 0 para 'NO'" << endl;
cin >> r;
} while (r==1);	
}
