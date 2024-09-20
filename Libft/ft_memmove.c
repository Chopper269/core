#include <ctype.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memmove(void *dest, const void *ori, size_t tam){   // Definimos las varibles destino y origen, y su tamanio. Son void porque puede ser cualquier dato. const es que es un valor constante, no varia
    unsigned char *d = (unsigned char *)dest; //convertimos la variable dest en unsigned char y lo asignamos a un puntero *d
    const unsigned char *o = (const unsigned char *)ori; //convertimos la constante ori en unsigned y lo asignamos un puntero *o. Tambien sera de tipo const para evitar errores

    for (size_t i = tam; i > 0; i--) { // inicializa un bucle donde mientras i sea diferente superior a 0, le resta 1 y lo ejecuta. El valor de i es tam. Esto permite ir recorriendo desde el byte final que queremos copiar al inicio.
         d[i - 1] = o[i - 1]; //Copiamos usando -1 puesto que el primer byte esta en la posicion 0, y tam tiene un tamaño 1 byte superior
    }
                    
    return dest;  // Devuelve el puntero al destino
        }


// Desarrollo del main
            
    int main(){


        char origen1[] = "pa ke kiere save eso jajasalu2xdxd";
        char destino1[60];


        printf("variable de origen antes de copia: %s\n", origen1); 
        printf("variable de destino antes de copia: %s\n", destino1);
        
        ft_memmove(destino1, origen1, strlen(origen1) + 1); //(ojo, el +1 es para copiar el caracter nulo de fin de la cadena)

        printf("variable de origen despues de copia: %s\n", origen1);
        printf("variable de destino despues de copia: %s\n", destino1);


    return 0;
}