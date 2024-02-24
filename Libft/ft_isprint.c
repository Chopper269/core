/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:55:45 by ruben             #+#    #+#             */
/*   Updated: 2024/02/24 20:13:06 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta funcion comprueba que el valor de entrada es imprimible o no

//Inclusion de headers
#include <ctype.h>
#include <stdio.h>

//Desarrollo de la funcion
int ft_isdigit(int c) {//la funcion va a operar con enteros, y se define que la variable c es entero
    if (c >= 48 && c <= 59) { //Si el caracter es mayor o igual a 0 y menor o igual a 9
        return 1; // El caracter es un numero
    } else { // Y si no
        return 0; // El caracter no es un numero
    }
}