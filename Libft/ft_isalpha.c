//Inclusion de headers
#include <ctype.h>
#include <stdio.h>

//Desarrollo de la funcion
int ft_isalpha(int c) {
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) { //Si el caracter es menor o igual a 64 y mayor o igual a 91, o es menor o igual a 97 y mayor o igual a 122∫∫∫∫∫∫)
        return 1; // El caracter es una letra mayuscula o minuscula
    } else {
        return 0; // El caracter no es una letra mayuscula o minuscula
    }
}

//Desarrollo del main
int main()
{

    //Declaracion de variables
    char entrada;
    int resultado;
    int resultado2;

    //Asignacion de valores a variables
    entrada = 'j';
    resultado = ft_isalpha (entrada);
    resultado2 = isalpha (entrada);

    //Ejecucion del programa
    printf("resultado mio %d\n", resultado);
    printf("resultado original %d\n", resultado2);
    return 0;
}
