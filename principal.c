#include <stdio.h>
#include "sumar.h"
#include "resta.h"
#include "multiplicar.h"
#include "dividir.h"

int main(){
	int a, b, sum, res, mul, caso;
        float div;
	
	printf("------------ Menu de Opciones -------------\n");
	printf("1. Sumar\n");
	printf("2. Restar\n");
	printf("3. Multiplicar\n");
	printf("4. Dividir\n");
	printf("5. Salir\n");

	do{
	printf("Introduce que operacion quieres hacer: \n");
	scanf("%d", &caso);

	if(caso == 1){
		printf("Introduce 2 numeros: \n");
		scanf("%d,%d",&a,&b);	
		sum = sumar(a, b);
		printf("El resultado de la suma es: %d\n", sum);
	}
	if(caso == 2){
		printf("Introdcue 2 numeros mayores que 0(el primero tiene que ser mayor): \n");
		scanf("%d,%d", &a, &b);
		res = resta(a, b);
		printf("El resultado de la resta es: %d\n", res);
	}
	if(caso == 3){
		printf("Introduce 2 numeros: \n");
		scanf("%d,%d", &a, &b);		
		mul = multiplicar(a, b);
		printf("El resultado de la multiplicacion es: %d\n", mul);
	}
	if(caso == 4){
		printf("Introduce 2 numeros mayores que 0: \n");
		scanf("%d,%d", &a, &b);
		div = dividir(a, b);
		printf("El resutado de la division es: %f\n", div);	
	}
	if(caso <= 0 || caso > 5){
		printf("Error. Elige una opcion valida.\n");	
	}
	}while(caso != 5);

	return 0;
}
