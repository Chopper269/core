#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

void    *ft_memset(void *a, int b, size_t c){   // a es la variable puntero al bloque de memoria X, b es el dato que vamos a "grabar" en el puntero y c es su tamanio.
    unsigned char *p; //declaramos un puntero p sin signo
    unsigned char grabar; //declaramos la variable grabar sin signo

    p = (unsigned char *)a; //le damos el valor de a al puntero p.
    grabar = (unsigned char)b; //convertimos en unsigned char el valor de b y le damos ese valor a la variable grabar

    while (c--) //ejecutamos el bucle tantas veces como c, decrementando el valor hasta llegar a 0, no ejecutando el bucle en ese caso
    {
        *p = grabar; //guarda el valor de grabar en la direccion del puntero p
        p++; //incrementa el valor de puntero al siguiente bloque de memoria
    }

    return (a); // devolvemos el valor del puntero original
}

int main()
 
{
    char ejemplo[] = "pake kiere saver eso jaja salu2 xdxd";    //main de prueba, declara una variable ejemplo

    ft_memset(ejemplo, 'z', 5); //ejecutamos la funcion, el primer argumento es la variable de ejemplo, el segundo argumento lo que vamos a grabar y el tercero 

    printf ("%s \n", ejemplo);  //imprime por pantalla el caracter ejemplo.
    
    return(0);  //finaliza el programa
}