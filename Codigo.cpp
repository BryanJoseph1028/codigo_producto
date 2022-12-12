#include <iostream>
#include <stdio.h>  
#include <string.h>

using namespace std;
const char *Supermercados= "productos.dat";

struct Super{
	int codigo_barras;	
};
void codigo_Barras();
main(){
	codigo_Barras();
	 return 0;
}

void codigo_Barras(){
	
	Super bodega;
	FILE* archivo =fopen(Supermercados,"a+b");
	char s;
	char continuar;
	do{
		fflush(stdin);
			
		cout<<"Ingrese el codigo al producto: ";
		cin>>bodega.codigo_barras;
		
		fwrite(&bodega, sizeof( Super ), 1, archivo);
		
	cout<<"Desea Agregar otros regristros s/n : ";
		cin>>continuar;
		} while((continuar=='s') || (continuar=='S') );
    fclose(archivo);
}

