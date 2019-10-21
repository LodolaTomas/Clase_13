#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=20;
    int* pEntero;

    pEntero=&x;

    printf("pEntero  [%d]\n",pEntero);

    //printf("pEntero-1[%d]\n",pEntero-1);

    pEntero=pEntero+1;//pEntero++;

    printf("pEntero+0[%d]\n",pEntero+0);
    printf("pEntero+1[%d]\n",pEntero+1);
    printf("pEntero+2[%d]\n",pEntero+2);
    printf("pEntero+3[%d]\n",pEntero+3);









    return 0;
}
