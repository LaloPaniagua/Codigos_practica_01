#include <stdio.h>
#include <stdlib.h>

int arr[3][2][4];
int main(){
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<2;j++){
            printf("\n");
            for(int k=0;k<4;k++){
                printf("Direccion de memoria %d,%d,%d: %p\n",i,j,k,&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n");
    //Impresion 3 matrices
    for(int i=0;i<3;i++)
    {
    printf("\t Matriz %d\n", i+1);
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<4;k++)
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
