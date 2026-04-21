/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:14:17 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 15:46:10 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Chequea si 'c' es es imprimible, es decir, si puede ser visualizado en la 
pantalla o impreso en un dispositivo de salida.
Son no imprimibles caracteres de control tales como \t, \n, o
ASCII menores a 32 o iguales o superiores a 127.

Valor devuelto: 
	-> si no es imprimible, devuelve 0.
*/
int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}
int main() {
	char c1 = 'A';	// Letra imprimible
	char c2 = '5';	// Dígito imprimible
	char c3 = ' ';	// Espacio imprimible
	char c4 = '\n';	// Caracter de nueva línea (no imprimible)

	printf("%c es imprimible: %d\n", c1, isprint(c1));
	printf("%c es imprimible: %d\n", c2, isprint(c2));
	printf("%c es imprimible: %d\n", c3, isprint(c3));
	printf("\\n es imprimible: %d\n", isprint(c4));

	return 0;
