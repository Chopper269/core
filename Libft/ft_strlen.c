#include <stdio.h>
#include <ctype.h>

int ft_strlen(const char *str)      //La funcion va a devolver un valor de tipo entero, y recibira un puntero de tipo const char (str)

{
    int longitud;                   //declaramos una variable tipo entero (int) llamada longitud, es la variable que contara los caracteres del array

    longitud = 0;                   //inicializamos la variable con valor 0.

    while (str[longitud] != '\0')   //cuando (while) srt (el valor que recibe la funcion) es diferente a 0, entra en el bucle (o sigue en el)
    
        longitud++;                 //este bucle solo hara que el tamaño de la variable logitud aumente +1 su valor hasta encontrar un caracter nulo
  
    return (longitud);              //devuelve el valor de longitud

}


int main()

{
    char ejemplo[] = "hijo de mil putas";    //main de prueba, declara una variable ejemplo con la palabra a contar

    printf ("%d \n", ft_strlen(ejemplo));    //imprime por pantalla la funcion ftstrlen con el valor ejemplo

    return(0);                      //finaliza el programa
}