/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:11:21 by ruben             #+#    #+#             */
/*   Updated: 2024/02/23 21:18:55 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Inclusion de headers
#include <ctype.h>
#include <stdio.h>

//Desarrollo de la funcion
int ft_isalpha(int c) { //la funcion va a operar con enteros, y se define que la variable c es entero
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) { //Si el caracter es menor o igual a 64 y mayor o igual a 91, o es menor o igual a 97 y mayor o igual a 122∫∫∫∫∫∫)
        return 1; // El caracter es una letra mayuscula o minuscula
    } else {
        return 0; // El caracter no es una letra mayuscula o minuscula
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
    entrada = 'j'; //asigna un valor de entrada
    resultado = ft_isalpha (entrada); //asigna un valor a resultado ejecutando ft_isalpha con la variable de entrada
    resultado2 = isalpha (entrada); //asigna un valor a resultado2 ejecutando isalpha con la variable de entrada

    //Ejecucion del programa
    printf("resultado mio %d\n", resultado); //muestra por pantalla el resultado con ft_isalpha
    printf("resultado original %d\n", resultado2); //muestra por pantalla el resultado con isalpha
    return 0; //fin del programa
}
