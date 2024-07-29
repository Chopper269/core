/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:55:40 by ruben             #+#    #+#             */
/*   Updated: 2024/02/24 20:13:04 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta funcion comprueba que el valor de entrada es ascii o no

//Inclusion de headers
#include <ctype.h>
#include <stdio.h>

//Desarrollo de la funcion
int ft_isascii(int c) {//la funcion va a operar con enteros, y se define que la variable c es entero
    if (c >= 00 && c <= 126) { //Si el caracter esta en el rango de los caracteres ascii
        return 1; // El caracter es ascii
    } else { // Y si no
        return 0; // El caracter no es ascii
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
    resultado = ft_ascii (entrada); //asigna un valor a resultado ejecutando ft_isascii con la variable de entrada
    resultado2 = isascii (entrada); //asigna un valor a resultado2 ejecutando isascii con la variable de entrada

    //Ejecucion del programa
    printf("resultado mio %d\n", resultado); //muestra por pantalla el resultado con ft_isascii
    printf("resultado original %d\n", resultado2); //muestra por pantalla el resultado con isascii
    return 0; //fin del programa
}
