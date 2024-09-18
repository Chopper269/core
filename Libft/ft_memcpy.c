#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

void    *ft_memcpy(void *des, void *ori, size_t tam){   // Definimos las varibles destino y origen, y su tamanio. Son void porque puede ser cualquier dato. 
    unsigned char *d = des;
    const unsigned char *o = ori;

for (size_t i = 0; i < tam; i++) { // inicializa un bucle donde mientras i sea menor a tamanio, se sigue ejecutando, copiando el codigo de des a ori
    d[i] = o[i]; // asigna al puntero d el valor del puntero o

}

}






void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}
