#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int array2[3][3],i,j;
		for(i=0;i<3;i++)      //Ciclo for para renglones
			{
				for(j=0;j<3;j++)    //Ciclo for para columnas
					{
						printf("Dirección en memoria del elemento (%i, %i): %p\n",i,j,&array2[i][j] );
					}
				printf("\n");
			}
		printf("Dirección en memoria del primer elemento: %p\n",&array2[0][0]);
		printf("Dirección en memoria del arreglo: %p",&array2);
		return 1;
	}
