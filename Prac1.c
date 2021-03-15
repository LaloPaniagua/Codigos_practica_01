#include<stdio.h>
#include<stdlib.h>
int main()
{
	int array1[10],i;
	for(i=0;i<10;i++)
		{
			printf("Dirección de memoria del elemento %i: %p\n",i,&array1[i]);                              
		}
	printf("\nDirección del primer elemento: %p\n",&array1[0]);
	printf("Dirección del arreglo: %p\n",&array1);
	return 1;
	
}

