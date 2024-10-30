#include<stdio.h>
#include<stdlib.h>

int main(){

	float promedio = 0, maxima, minima = 0;
	int contador;
	float temp_semana[7];
	char Dias_semana[7][11] = {
		"Lunes",
		"Martes",
		"Miércoles",
		"Jueves",
		"Viernes",
		"Sábado",
		"Domingo"
	};
	for(contador = 0; contador <= 6; contador++){			//usamos un ciclo for para utilizar un contador, que nos permita cuardar el valor de cada dia de la semana en
									//cada posicion del array.
		printf("Ingrese la temperatura promedio del dia %s\n", Dias_semana[contador]);
		scanf("%fl", &temp_semana[contador]);
		promedio += temp_semana[contador];
	}
	printf("El promedio de las temperaturas es: %2.f\n", promedio / contador);
	contador = 0;

	maxima = temp_semana[contador];
	for(contador = 1; contador <= 6; contador++){
		if (maxima < temp_semana[contador]){
			maxima = temp_semana[contador];
		}
	}
	minima = temp_semana[contador];
	for(contador = 1; contador <= 6; contador++){

		if (minima > temp_semana[contador]){
			minima = temp_semana[contador];
		}
	}
			printf("La temperatura máxima es: %2.f\n", maxima);
			printf("La temperatura mínima es : %.2f\n", minima);
			return EXIT_SUCCESS;

		}
