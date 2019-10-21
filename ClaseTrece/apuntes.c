/**
    PUNTEROS:

    apunta a otra variable

    cuando creo un puntero a una variable tiene que ser el mismo dato que la variable

    sizeof(tipo de dato)

    todos los punteros ocupan 4 bytes porque el puntero guarda la direccion de memoria que es un entero

 --   OPERADORES:

    1. * : operador de inacceso o de indireccion -> para declarar el puntero y para poder acceder a los datos
    2. & : operador de direccion
    3. -> : para estructuras

    printf("%d", x);//10
    printf("%d", &x);//0x1473
    printf("%d", pEntero);//0x1473
    printf("%d", *pEntero);//10
    printf("%d", &pEntero);//0x1490

    printf("%p\n", *pEntero); -> lo muestra como direccion de memoria en hexadecimal

    Si le pido espacio en memoria y no hay disponible, el puntero me devuelve NULL. Un puntero puede guardar
    una no direccion de memoria

    int* pEntero = NULL;

    control de nulidad :

        if(pEntero != NULL)
    {
        printf("entro");
    }else
    {
        printf("error");
    }

    PARA GUARDAR:

            scanf("%d\n", pEntero); == scanf("%d\n", &x);

    Si yo hago :

    scanf("%d\n", &pEntero); -> me guarda el valor en el pEntero y me termina apuntando a cualquier lugar

    ASIGNACION DE UN PUNTERO A OTRO PUNTERO:

    if(pEntero != NULL)
    {
        pOtroPunteroEntero = pEntero;
        printf("%d\n", *pEntero);
        *pEntero = 700;
        printf("%d\n", *pOtroPunteroEntero);

    }


    ARITMETICA DE PUNTEROS:
    me muevo a traves de indices:

        printf("%d\n", pEntero+0); -> no cambia nada /// vector[0]
        printf("%d\n", pEntero+1); -> le suma el valor de un entero /// vector[1]

        DESPLAZAMIENTO DEL PUNTERO:
        me puedo ir moviendo en la memoria, para por ejemplo recorrer una coleccion de datos en un modo SOLO AVANCE (tengo un array
        y me quiero mover dato por dato e ir perdiendo referencia del valor anterior - para tampoco dejar que el usuario se mueve para atras)

        pEntero = pEntero + 1; == pEntero++;


**CUANDO YO PASO UN PUNTERO LOS PASO POR REFERENCIA







*/
