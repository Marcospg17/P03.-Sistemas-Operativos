#include "dividir.h"

float dividir(int numero1, int numero2){
	if((numero1 > 0)&&(numero2 > 0)){
		return numero1 / numero2;
	}else{
		return 0;
	}
}

