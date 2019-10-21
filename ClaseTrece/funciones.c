#include "funciones.h"
int cargarVector(int* vector, int tam)
{
    int retorno = -1;
    int i;
    if(vector != NULL && tam>0)
    {
        for(i=0;i<tam;i++)
        {
            printf("Ingrese un numero: \n");// == vector[i]
            scanf("%d", vector+i);
        }
        retorno = 0;
    }
    return retorno;
}
int mostrarVector(int* vector, int tam)
{
    int retorno = -1;
    int i;
    if(vector != NULL && tam>0)
    {
        for(i=0;i<tam;i++)
        {
            printf("%d\n", *(vector+i));// == vector[i]
        }
        retorno = 0;
    }
    return retorno;
}
