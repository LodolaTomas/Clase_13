#include <stdio.h>
#include <stdlib.h>
#define T 5

int cargarVector(int* vector,int tam);
int mostrarVector(int* vector,int tam);

int main()
{
    /*
    int vector[5]={5,7,9,8,2};
    int* puntero;
    int i;

    //puntero= &vector; redundante
    puntero=  vector;
    //puntero= &vector[0]; redundante
    //punter= vector[0]; no

    for(i=0;i<5;i++)
    {
        //printf("%d\n",*(puntero+i));//bien hecho //vector[i] con notacion de vectores
        //printf("%d\n", *puntero+i);// mal hecho

    }
    */

    int vector[T];

    if(cargarVector(vector,T)==-1)
    {
        printf("Hubo un Error");
    }

    if(mostrarVector(vector,T)==-1)
    {
        printf("Hubo un Error");
    }


    return 0;
}

int cargarVector(int* vector,int tam)
{
    int i;
    int retorno=-1;

    if(vector!=NULL && tam>0)
    {
        for(i=0; i<tam; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",vector+i);
        }
        retorno=0;
    }
    return retorno;
}
int mostrarVector(int* vector,int tam)
{
    int i;
    int retorno=-1;

    if(vector!=NULL && tam>0)
    {
        for(i=0; i<tam; i++)
        {
            printf("%d\n",*(vector+i));
        }
        retorno=0;
    }
    return retorno;
}
