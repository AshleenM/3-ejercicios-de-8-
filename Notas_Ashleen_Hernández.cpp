#include <iostream>
using namespace std;

int main(){
	
	string vOpcion;
	int vNota = 0, vSumaNotas = 0, vContador = 0;
	double vPromedio = 0;
	
	while(vOpcion != "N" && vOpcion != "n")
	{
	vContador += 1; 
	cout<<"Ingrese la nota del alumno" <<vContador <<": ";
	cin>> vNota;
	vSumaNotas += vNota;
	
	cout<<"Desea ingresar otra nota: ";
	cin >> vOpcion;
	system("cls");
	}
	vPromedio = vSumaNotas / vContador;
	cout<<"El promedio de la nota de Ciencias Naturales ingresadas es: ";
	cout<< vPromedio <<endl <<endl;
	
	system("pause");


	return 0;
	
}
