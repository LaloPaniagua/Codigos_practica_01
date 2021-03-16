#include<stdio.h>
#include<stdlib.h>
/*
*
*
*
*/
int main()
{
	int array1[10],i;
	for(i=0;i<10;i++) //se crea un ciclo for para imprimir todas las direcciones de memoria de los elementos del arreglo. 
		{
			printf("Dirección de memoria del elemento %i: %p\n",i,&array1[i]);                              
		}
	printf("\nDirección del primer elemento: %p\n",&array1[0]); //Esta parte de linea realiza la impresión de la direccion de memoria del primer elemento del arreglo. 
	printf("Dirección del arreglo: %p\n",&array1);  //Aqui se imprime la dirección de memoria del arreglo. 
	return 1;
	
}

