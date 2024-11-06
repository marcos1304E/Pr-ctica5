#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

	printf("Inventario completo: \n"); //Mostramos el inventario completo
	for (i = 0; i < cantidad_productos; i++){
		printf("Producto %d: %s - %d unidades\n", i + 1, Informatica[i].nombre, Informatica[i].cantidad_stock);




		for(i = 0; i < cantidad_productos; i++){

			printf("Si desea reabastecer algún producto, pulse 1, si no pulse 2:\n");
			scanf(" %d", &reabastecer);	

		}if (reabastecer == 1){
			int agregar_cant;//Creamos la variable para almacenar la cantidad que el usuario desea añadir al stock, cuando se selecciona un producto que reabastecer, se le pide la cantidad que quiere añadir, entonces esa cantidad se guarda en esta variable.
			int encontrado = 0;//Usamos esta variable como indicador para saber si el producto fue encontrado en el inventario o no
			char nombre_producto[20];//Para almacenar el producto que escriba el usuario
			printf("¿Que producto quiere reabastecer?\n");
			scanf("%s", Informatica[i].nombre);
			if(strcmp(Informatica[i].nombre, Informatica[i].nombre) == 0){ //Aqui usamos el strcmp para comparar el nombre del producto en el inventario, con el nombre ingresado por el usuario
			}									//Si nos devuelve un 0, significa que las cadenas son iguales,

			printf("¿Que cantidad quiere añadir de %s?\n",Informatica[i].nombre);
			scanf(" %d", &agregar_cant);

			Informatica[i].cantidad_stock += agregar_cant;
			printf("El producto ha sido actualizado, la nueva cantidad en stock es: %d\n");

			encontrado = 1;
			break;//Ponemos el break para que se termine el bucle una vezencontrado y actualizado el producto
		}}

	printf("Inventario actualizado:\n");
	for (i = 0; i < cantidad_productos; i++){
		printf("Producto %d: %s - %d unidades\n", i + 1, Informatica[i].nombre, Informatica[i].cantidad_stock);
	}
	if (reabastecer < 1 || reabastecer > 2){
		printf("Valor introducido no valido\n");
	}
	if (reabastecer == 2){
		printf("Vale");	
	}	

	return 0;
}


