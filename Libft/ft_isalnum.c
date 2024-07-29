/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:55:35 by ruben             #+#    #+#             */
/*   Updated: 2024/02/24 20:43:34 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta funcion comprueba que el valor de entrada es alfanumerico o no

//Inclusion de headers
#include <ctype.h>
#include <stdio.h>

//Desarrollo de la funcion
int ft_isalnum(int c) {//la funcion va a operar con enteros, y se define que la variable c es entero
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) { //Si el caracter es numerico o minusculas, o mayusculas, en la tabla ascii
        return 1; // El caracter es un numero
    } else { // Y si no
        return 0; // El caracter no es un numero
    }
}


//Desarrollo del main
int main() {//declaracion de main. Es un entero porque retorna un 0 al final, y es void porque no tiene argumentos de entrada


    //Declaracion de variables
    char entrada; //define que la variable entrada es un char
    int resultado; //define que la variable resultado es un int
    int resultado2; //define que la variable resultado es un int

    //Asignacion de valores a variables
    entrada = '5'; //asigna un valor de entrada
    resultado = ft_isalnum (entrada); //asigna un valor a resultado ejecutando ft_isalpha con la variable de entrada
    resultado2 = isalnum (entrada); //asigna un valor a resultado2 ejecutando isalpha con la variable de entrada

    //Ejecucion del programa
    printf("resultado mio %d\n", resultado); //muestra por pantalla el resultado con ft_isalpha
    printf("resultado original %d\n", resultado2); //muestra por pantalla el resultado con isalpha
    return 0; //fin del programa
}