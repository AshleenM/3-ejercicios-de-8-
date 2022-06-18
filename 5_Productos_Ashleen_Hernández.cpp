#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string vOpcion;
	double vcompraTotal = 0, vImpTotal = 0, vTotalpagar =0;
	while (vOpcion != "N" && vOpcion != "n")
	{
		int vcantidad =0, vProducto =0;
		double vImpuesto =0, vTotal =0, vTotalproducto =0, vPrecio =0;
		
		cout<<" \n 1.- camiseta----------- 100.00lps ";
		cout<<" \n 2.- chaqueta------------200.00lps ";
		cout<<" \n 3.- Abrigo de cuero-----150.00lps ";
		cout<<" \n 4.- Pantalon corto------50.00lps ";
		cout<<" \n 5.- Jeans vaquero-------100.00lps ";
		cout<<" \n\n seleccione el producto : ";
		cin>> vProducto;
		
		switch (vProducto)
		{
			case 1:
				vPrecio = 100;
				break;
			
			case 2:
				vPrecio = 200;
				break;
			
			case 3: 
			    vPrecio = 150;
			    break;
		           
			case 4:
				vPrecio = 50;
				break;
				
			case 5:
				vPrecio = 100;
			default:
			cout<<"\n Opci\xa2n seleccionada incorrecta \n\n";
			system ("pause");
			system ("cls");
			continue;				
				
				
		}
		
		cout<<"\nIngrese la cantidad: ";
		cin>> vcantidad;
		vTotal = vcantidad * vPrecio;
		vImpuesto = vTotal * 15 / 100;
		vTotalproducto =vTotal + vImpuesto;
		
		vcompraTotal += vTotal;
		vImpTotal += vImpuesto;
		vTotalpagar += vTotalproducto;
		
		cout<<"Total a pagar por el producto seleccionado \n\n ";
		cout<< setw(15) << "Total" << setw(15) << setw(20) << "total a pagar \n";
		cout<< setw(15) << vTotal << setw(15) <<vImpuesto << setw(20) <<vTotalproducto <<"\n";
		cout<<"----------------------------------------- \n\n";
		
		cout<< "Desea seleccionar otro producto ";
		cin>> vOpcion;
		system ("cls");
	}
	cout<< "Total facturado \n";
	cout<< setw(15) << "subTotal" << setw(15) << "Impuesto" << setw(20) << vTotalpagar << "\n";
	
	system("pause");
	
	
  	return 0;
}
