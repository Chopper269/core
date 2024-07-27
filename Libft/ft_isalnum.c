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
    if (c >= 48 && c <= 57 || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) { //Si el caracter es numerico o minusculas, o mayusculas, en la tabla ascii
        return 1; // El caracter es un numero
    } else { // Y si no
        return 0; // El caracter no es un numero
    }
}