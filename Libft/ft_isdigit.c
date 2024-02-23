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
int main ()
{

    int entrada;
    int resultado;
    int resultado2;

    entrada = 55;
    resultado = ft_isdigit (entrada);
    resultado2 = isdigit (entrada);

    printf("resultado ft: %d\n", resultado);
    printf("resultado original %d\n", resultado2);
}
