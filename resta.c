#include "resta.h"

int resta(int numero1,int numero2){
	if((numero1>= 0)&&(numero2>=0)){
		if(numero1 >= numero2){
			return numero1-numero2;
		}else{
			return 0;
		}	
	}else{
		return 0;
	}
}

