/* Elaborar un programa que procese información sobre productos comprados por un cliente en una tienda, 
a modo de procesamiento de una factura de compra. La información se manejará en un arreglo, en el cual 
cada casilla contendrá los datos de: nombre del artículo, cantidad de unidades compradas, precio unitario 
y costo total por artículo. */

#include <iostream>
#include <conio.h>

using namespace std;
const int longCad = 20;

void pedirDatos(int);
void facturar(int);
float procesarTotal(int);
void calcularCosto(int);

struct costoPorArticulo{
		char nombreArticulo[longCad+1];
		int cantidad;
		float precio;
		float costoPorArticulo;
	}productosCliente[0];


int main(){
	int cantidadProductos=0;
	productosCliente[cantidadProductos];
	cout<<"Ingrese cantidad de articulos comprados:"; cin>>cantidadProductos; // Se establece la cantidad de productos del cliente en el arreglo


	for (int i=0; i<cantidadProductos;i++){ 
		pedirDatos(i);//Se le pide al cliente los datos de cada articulo
	}
	facturar(cantidadProductos);// Se muestra la factura y el total de la compra
	
	getch();
	return 0;
}

void pedirDatos(int i){
	cout<<"================"<<endl<<"Articulo ["<<i+1<<"]"<<endl;
	cout<<"Ingrese Nombre del articulo: ";
	cin>>productosCliente[i].nombreArticulo;
	cout<<"Ingrese precio del producto en dolares: ";
	cin>>productosCliente[i].precio;
	cout<<"Cantidad de productos: ";
	cin>>productosCliente[i].cantidad;
	calcularCosto(i);
}

void calcularCosto(int producto){
	productosCliente[producto].costoPorArticulo= productosCliente[producto].precio * productosCliente[producto].cantidad;

}
void facturar(int n){
	for (int i =0; i<n; i++){
	cout<<"Producto: "<<productosCliente[i].nombreArticulo<<"    |";
	cout<<"Cantidad: "<<productosCliente[i].cantidad<<"    |";
	cout<<"Precio: $"<<productosCliente[i].precio<<"    |";
	cout<<"Costo por articulo: $"<<productosCliente[i].costoPorArticulo<<endl;	
	
	}
	cout<<"==============\n"<<"Total de compra: $"<<procesarTotal(n);
} 
float procesarTotal(int cantidadProductos){
	float total=0;
	for (int i = 0; i< cantidadProductos ; i++){
		total+=productosCliente[i].costoPorArticulo;
	}
	return total;
}
