#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

void    *ft_bzero(void *a, size_t c){   // a es la variable puntero al bloque de memoria X, y c es su tamanio.
   
    unsigned char *p; //declaramos un puntero p sin signo
    p = (unsigned char *)a; //le damos el valor de a al puntero p.

    while (c--) //ejecutamos el bucle tantas veces como c, decrementando el valor hasta llegar a 0, no ejecutando el bucle en ese caso
    {
        *p = 0; //Pone a 0 en la direccion del puntero p
        p++; //incrementa el valor de puntero al siguiente bloque de memoria
    }

    return (a); // devolvemos el valor del puntero original
}

int main()
 
{
    char ejemplo[] = "pake kiere saver eso jaja salu2 xdxd";    //main de prueba, declara una variable ejemplo
    
    ft_bzero(ejemplo, 5); //ejecutamos la funcion, el primer argumento es la variable de ejemplo, el segundo los bytes que pondremos a 0

    printf ("%s \n", ejemplo);  //imprime por pantalla la el caracter ejemplo.
    
    return(0);  //finaliza el programa
}