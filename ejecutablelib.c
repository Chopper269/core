//ESTO SOLO VALE PARA TENER EL MAIN DE EJEMPLO A SALVO

//Desarrollo del main
int main() //declaracion de main. Es un entero porque retorna un 0 al final, y es void porque no tiene argumentos de entrada
{

    //Declaracion de variables
    char entrada; //define que la variable entrada es un char
    int resultado; //define que la variable resultado es un int
    int resultado2; //define que la variable resultado es un int

    //Asignacion de valores a variables
    entrada = '8'; //asigna un valor de entrada
    resultado = ft_isalpha (entrada); //asigna un valor a resultado ejecutando ft_isalpha con la variable de entrada
    resultado2 = isalpha (entrada); //asigna un valor a resultado2 ejecutando isalpha con la variable de entrada

    //Ejecucion del programa
    printf("resultado mio %d\n", resultado); //muestra por pantalla el resultado con ft_isalpha
    printf("resultado original %d\n", resultado2); //muestra por pantalla el resultado con isalpha
    return 0; //fin del programa
}