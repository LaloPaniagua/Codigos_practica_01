#include <stdio.h>
#include <stdlib.h>

int arr[3][2][4];
int main(){
    //impresion de direcciones de memoria en forma de lista
    for(int i=0;i<3;i++){ //Ciclo for para matrices
        printf("\n");
        for(int j=0;j<2;j++){ //Ciclo for para renglones
            printf("\n");
            for(int k=0;k<4;k++){ //Ciclo for para columnas
                printf("Direccion de memoria %d,%d,%d: %p\n",i,j,k,&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n");
    //Impresion de direccion de memoria en forma de matrices
    for(int i=0;i<3;i++) //Ciclo for para matrices
    {
    printf("\t Matriz %d\n", i+1);
        for(int j=0;j<2;j++) //Ciclo for para renglones
        {
            for(int k=0;k<4;k++) //Ciclo for para columnas
            {
                printf("\t %p",&arr[i][j][k]);
            }
        printf("\n\n");
        }
    printf("\n\n");
    }
    printf("Direccion en memoria del primer elemento: %p\n",&arr[0][0][0]);
    printf("Direccion en memoria del arreglo: %p",&arr);
}

// Programa realizado por Diego Barragán Rivera y Justheene Ezequiel Salgado Becerra el 4/3/2021.
