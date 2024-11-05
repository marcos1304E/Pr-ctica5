#include<stdio.h>
#include<stdlib.h>
#define NOTA_MINIMA 5.00

struct Estudiante{
	char nombre[50];
	float nota_final;
};
int main(){
	int num_alumnos, i, aprobados = 0, suspensos = 0, posicion_nota_maxima = 0, posicion_nota_minima = 0;
	float promedio = 0, nota_maxima = 0, nota_minima = 0;

	printf("Ingresa la cantidad de alumnos; \n");
	scanf("%d", &num_alumnos);

	if (num_alumnos <= 0){
		printf("Valor introducido no válido.");
		return 1;
	}
	struct Estudiante alumnos [num_alumnos];
	for(i = 0; i < num_alumnos; i++ ){
		printf("Alumno %d\n",i + 1);

		printf("Nombre: ");
		scanf(" %[^\n]", alumnos[i].nombre);
		
		printf("Nota Final: ");
		scanf("%f", &alumnos[i].nota_final);

		promedio += alumnos[i].nota_final;
	}
		promedio /= num_alumnos;
		printf("La nota promedio de los alumnos del grupo es: %.2f\n", promedio);

	for(i = 0; i < num_alumnos; i++ ){
		if(alumnos[i].nota_final >= NOTA_MINIMA){
			aprobados++;
	}else{
			suspensos++;
	}
}

			printf("EL número total de aprobados es: %d\n", aprobados);
			printf("EL número total de suspensos es: %d\n", suspensos);
	nota_maxima = alumnos[0].nota_final;
	nota_minima = alumnos[0].nota_final;
	for(i = 1; i < num_alumnos; i++){
		if (alumnos[i].nota_final > nota_maxima){
			nota_maxima = alumnos[i].nota_final;
			posicion_nota_maxima = i;
		}
		if (alumnos[i].nota_final <  nota_minima){
			nota_minima = alumnos[i].nota_final;
			posicion_nota_minima = i;
		}
	}

		printf("La nota mas alta es %.2f. (Estudiante en la posicion %d)\n",nota_maxima, posicion_nota_maxima + 1 );
		printf("La nota mas baja es %.2f.(Esudiante en la posicion %d)\n", nota_minima, posicion_nota_minima + 1);
		printf("Notas por encima del promedio:\n");
	for(i = 0; i < num_alumnos; i++){
		if (alumnos[i].nota_final > promedio){
			printf("Estudiante en la posicion %d: %.2f\n", i + 1, alumnos[i].nota_final);
		}
	}
return 0; 
}
