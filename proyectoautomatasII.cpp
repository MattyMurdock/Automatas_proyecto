#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int posicionOperador1, posicionOperador2;
	char operando1[15],operando2[15],operador,operador2;
	// Arreglo para guardar la cadena
	char cadena[15];	
 	printf("Ingrese la cadena \n>");
 	//nombre del String, Tamaño maximo, Standard Input (teclado estandar)
 	fgets(cadena,15,stdin);
 	
 	// hola+adiosR
 	// hola
 	// +
 	int x;
 	for(x=0; x<15; x++){
 		if(cadena[x] == '+'){
 			operador = cadena[x];
 			posicionOperador1 = x;
 			break;
 			//3
		 }else{
		 	operando1[x] = cadena[x];
		 }
	 }// primer for
 	
 	int y;
 	for(y=posicionOperador1+1 ; y<15; y++){
 		printf("\n %i",y);
 		if(cadena[y] == 'R'){
		 	operador2 = cadena[y];
 			posicionOperador2 = y;
		 }else{
		 	operando2[y-posicionOperador1-1] = cadena[y];
		 }
	 }
	 
	 
	 
	 printf("se ingreso %s \n",cadena);
	 /*printf("\nOperando 1: %s",operando1);
	 printf("\nOperador 1: %c",operador);
	 printf("\nOperando 2: %s",operando2);
	 printf("\nOperador 2: %c",operador2);*/
	
		 
}// void

void comprobar(char operando1[], char operador, char operando2[] ,char operador2 ){
	
	
	 printf("\nOperando 1: %s",operando1);
	 printf("\nOperador 1: %c",operador);
	 printf("\nOperando 2: %s",operando2);
	 printf("\nOperador 2: %c",operador2);
	 
	 return;
	 
}
