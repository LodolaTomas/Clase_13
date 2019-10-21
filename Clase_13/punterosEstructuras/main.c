#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    float nota;
    char sexo;

}eAlumno;

int main()
{
/*
    eAlumno unAlumno;//{1000,2,'m'};
    eAlumno* pAlumno;


    //pAlumno= unAlumno; nooo
    pAlumno= &unAlumno;//direccion de memoria de la estrcutura

    /*
    printf("Ingrese un legajo: ");
    scanf("%d",&(*pAlumno).legajo);
    printf("Ingrese una nota: ");
    scanf("%f",&(*pAlumno).nota);
    printf("Ingrese sexo: ");
    fgetc(stdin);
    scanf("%c",&(*pAlumno).sexo);

    printf("Ingrese un legajo: ");
    scanf("%d",&pAlumno->legajo);
    printf("Ingrese una nota: ");
    scanf("%f",&pAlumno->nota);
    printf("Ingrese sexo: ");
    fgetc(stdin);
    scanf("%c",&pAlumno->sexo);

    printf("\nlegajo[%d],nota[%.2f],sexo[%c]\n",pAlumno->legajo,pAlumno->nota,pAlumno->sexo);
    //Se puede hacer de la misma forma
    //printf("legajo[%d],nota[%.2f],sexo[%c]",(*pAlumno).legajo,(*pAlumno).nota,(*pAlumno).sexo);
*/

    eAlumno lista[3]={{1000,7,'m'},{1001,10,'f'},{1002,8,'m'}};
    eAlumno* pLista;
    int i;

    pLista=lista;

    for(i=0;i<3;i++)
    {
        printf("legajo[%d],nota[%.2f],sexo[%c]\n",(pLista+i)->legajo,(pLista+i)->nota,(pLista+i)->sexo);

        //printf("legajo[%d],nota[%.2f],sexo[%c]\n",(*(pLista+i)).legajo,(*(pLista+i)).nota,(*(pLista+i)).sexo);
    }


    return 0;
}
