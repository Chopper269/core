#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c) {
    if (c >= 48 && c <= 59) { //Si el caracter es mayor o igual a 0 y menor o igual a 9
        return 1; // El caracter es un numero
    } else {
        return 0; // El caracter no es un numero
    }
}
// Desarrollo del main
int main () // Declaracion del main. Es un int porque retorna un 0 al final y es VOID porque no tiene argumentos de entrada
{

    int entrada; // Define que la variable de entrada es un numero entero int
    int resultado; // Define que la variable resultado es un numero entero int
    int resultado2; // Define que la variable resultado es un numero entero int

    entrada = 55; //Definimos un valor y lo ponemos aqui
    resultado = ft_isdigit (entrada); //asigna a resultado el valor de ft_isdigit segun la entrada que lea
    resultado2 = isdigit (entrada); //asigna a resultado el valor de isdigit segun la entrada que lea

    printf("resultado ft: %d\n", resultado); //muestra por pantalla el resultado de ft
    printf("resultado original %d\n", resultado2); //muestra por pantalla el resultado segun isdigit original
    return 0; //fin del programa
}
