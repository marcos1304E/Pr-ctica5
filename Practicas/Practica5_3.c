#include <stdlib.h>
#include <stdio.h>
#define PRODUCTO_MAX 10

struct Productos{
	char nombre[20];
	int cantidad_stock;
};
int main(){
	int cantidad_productos, i, reabastecer;

	printf("Intrege la cantidad de productos que desea gestionar: \n");
	scanf("%d", &cantidad_productos);

	if(cantidad_productos < 0 || cantidad_productos > 10){
		printf("El valor introducido no es válido.");
		return 1;
	}
	struct Productos Informatica[cantidad_productos];
	for(i = 0; i < cantidad_productos; i++){
		printf("Producto %d\n", i + 1);

		printf("Nombre: ");
		scanf(" %s", Informatica[i].nombre);

		printf("Cantidad: ");
		scanf(" %d",&Informatica[i].cantidad_stock);
	}

	printf("Inventario completo: \n");
	for (i = 0; i < cantidad_productos; i++){
		printf("Producto %d: %s - %d unidades\n", i + 1, Informatica[i].nombre, Informatica[i].cantidad_stock);
	}
	
	if (reabastecer < 1 || reabastecer > 2){
		printf("El valor introducido no es valido.\n");
	
	}
	for(i = 0; i < cantidad_productos; i++){

	printf("Si desea reabastecer algún producto, pulse 1, si no pulse 2.\n");
	scanf(" %d", &reabastecer);	
	if (reabastecer = 1){
		printf("¿Que producto quiere reabastecer?\n");
		scanf("%s", Informatica[i].nombre);
		printf("¿Que cantidad?\n");
		scanf(" %d", &Informatica[i].cantidad_stock);
	}
		if (reabastecer = 2){
			printf("Perfecto");	
		}	
	
		return 0;
	}}


