#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

void    *ft_memset(void *a, int b, size_t c){   // a es la variable puntero al bloque de memoria X, b es el dato que vamos a "grabar" en el puntero y c es su tamanio.
    unsigned char *p; //declaramos un puntero p sin signo
    unsigned char grabar; //declaramos la variable grabar sin signo

    *p = a; //le damos el valor de a al puntero p.
    grabar = (unsigned char)b; //convertimos en unsigned char el valor de b y le damos ese valor a la variable grabar

    while (c--) //ejecutamos el bucle tantas veces como c, decrementando el valor hasta llegar a 0, no ejecutando el bucle
    {
        
    }
}