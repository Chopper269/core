#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

size_t ft_strlcpy(char *dest, const char *ori, size_t tam) {
    
//esta parte del codigo se comporta como strlen para averiguar el tamaño de la cadena de origen
    size_t longitud;                //declaramos una variable llamada longitud, es la variable que contara los caracteres del array
    longitud = 0;                   //inicializamos la variable con valor 0.
    
    while (ori[longitud] != '\0')   //cuando (while) ori es diferente a 0, entra en el bucle (o sigue en el)
        longitud++;                 //este bucle solo hara que el tamanio de la variable logitud aumente +1 su valor hasta encontrar un caracter nulo

//a partir de aqui sabemos el tamaño de la cadena, y trabajamos con eso para copiar el contenido
//Comprobacion de 0. Si el destino es 0, no hace copia, puesto que no habria donde copiar el caracter nulo.
    if (tam == 0) {
        return longitud;
    }

//Copiamos hasta el tamaño de destino -1 para poder el nulo. Si el origen es mas grande no lo copiara totalmente
    size_t i; //declaramos fuera del bucle i para poder usarlo tambien fuera, para el nulo 

    for (i = 0; i < tam - 1 && i < longitud; i++) { // El bucle se ejecuta mientras que i sea menor al buffer destino -1 y mientras sea menor a la longitud del origen
        dest[i] = ori[i]; //Copia el caracter de origen en destino

    }

    dest[i] = '\0'; //Al acabar el bucle, con el origen copiado total o parcialmente, escribimos el nulo al final

    return longitud; //devolvemos el tamaño de la variable de origen
}


int main() {
    char ori[] = "pakekieresaveresojajasalu2xdxd";
    char dest[6]; // Tamaño del destino es 6 (5 caracteres + '\0')

    size_t tam = ft_strlcpy(dest, ori, sizeof(dest));

    printf("Cadena destino: %s\n", dest);
    printf("Longitud de la cadena origen: %zu\n", tam); //z indica que se imprime size t, y u que es unsigned

    return 0;
}