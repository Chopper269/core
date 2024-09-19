#include <ctype.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void    *ft_memcpy(void *dest, const void *ori, size_t tam){   // Definimos las varibles destino y origen, y su tamanio. Son void porque puede ser cualquier dato. const es que es un valor constante, no varia
    unsigned char *d = (unsigned char *)dest; //convertimos la variable dest en unsigned char y lo asignamos a un puntero *d
    const unsigned char *o = (const unsigned char *)ori; //convertimos la constante ori en unsigned y lo asignamos un puntero *o. Tambien sera de tipo const para evitar errores

for (size_t i = 0; i < tam; i++) { // inicializa un bucle donde mientras i sea menor a tamanio, se sigue ejecutando, copiando el codigo de des a ori
    d[i] = o[i]; // asigna al puntero d el valor del puntero o tantas veces como tam

    }
    
    return dest;  // Devuelve el puntero al destino
}


// Desarrollo del main


void *ft_memcpy(void *dest, const void *ori, size_t tam);

int main() {


    char origen1[] = "pa ke kiere save eso jajasalu2xdxd";
    char destino1[20];


    printf("variable de origen antes de copia: %s\n", origen1); 
    printf("variable de destino antes de copia: %s\n", destino1);
    
    ft_memcpy(destino1, origen1, strlen(origen1) + 1);

    printf("variable de origen despues de copia: %s\n", origen1);
    printf("variable de destino despues de copia: %s\n", destino1);


