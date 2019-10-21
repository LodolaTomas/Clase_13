#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*int x = 10;
    int* pEntero = NULL;//Siempre controlar que sea NULL

    pEntero  =   &x;//pEntereo = ox1473(direccion de memoria)

    *pEntero = 70;

    if(pEntero!=NULL)//pEntero=NULL pEntero==0
    {
        printf("%d\n",  x);//10
        printf("%d\n", &x);//0x1473
        printf("%d\n",  pEntero);//0x1473
        printf("%d\n", *pEntero);//10
        printf("%d\n", &pEntero);//0x1490
    }
    else{
        printf("Error");
    }

    //*  operador de inacceso
    //&  operador de direccion
    //-> estructuras
    ********************************************************************/
    int x = 100;
    int* pEntero;
    int* pOtroPuntero;//= NULL


    pEntero  =   &x;

    if(pEntero!=NULL)
    {
        //printf("Ingese un numero: ");

        pOtroPuntero=pEntero;

        //scanf("%d", pEntero);//&pEntero paso la dirreccion del entero y no del destino

        printf("%d\n", *pOtroPuntero);

        *pEntero = 700;

        printf("%d\n",*pOtroPuntero);

    }



    return 0;
}
