
//Esta funcion comprueba que el valor de entrada es ascii imprimible o no

//Inclusion de headers
#include <ctype.h>
#include <stdio.h>

//Desarrollo de la funcion
int ft_isascii(int c) {//la funcion va a operar con enteros, y se define que la variable c es entero
    if (c >= 32 && c <= 126=) { //Si el caracter esta en el rango de los caracteres ascii imprimibles
        return 1; // El caracter es ascii imprimible
    } else { // Y si no
        return 0; // El caracter no es ascii imprimible
    }
}


//Desarrollo del main
int main() //declaracion de main. Es un entero porque retorna un 0 al final, y es void porque no tiene argumentos de entrada
{

    //Declaracion de variables
    char entrada; //define que la variable entrada es un char
    int resultado; //define que la variable resultado es un int
    int resultado2; //define que la variable resultado es un int

    //Asignacion de valores a variables
    entrada = 'h'; //asigna un valor de entrada
    resultado = ft_isprint (entrada); //asigna un valor a resultado ejecutando ft_isprint con la variable de entrada
    resultado2 = isprint (entrada); //asigna un valor a resultado2 ejecutando isprint con la variable de entrada

    //Ejecucion del programa
    printf("resultado mio %d\n", resultado); //muestra por pantalla el resultado con ft_isprint
    printf("resultado original %d\n", resultado2); //muestra por pantalla el resultado con isprint
    return 0; //fin del programa
}
