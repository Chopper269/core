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
    if (c >= 32 && c <= 126) { //Si el caracter esta en el rango de los caracteres ascii imprimibles
        return 1; // El caracter es ascii imprimible
    } else { // Y si no
        return 0; // El caracter no es ascii imprimible
    }
}