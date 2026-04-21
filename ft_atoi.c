/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:58:26 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 10:22:10 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Convierte el string apuntado a int.

Argumentos:
	-> *str: el puntero a str a convertir.
Valor devuelto: 
	-> el int con el valor entero resultante.
	   Si no hay dígitos, devuelve 0.

Maneja espacios en blanco iniciales, signos '+' y '-', y dígitos numéricos.
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	// busca espacios en blanco tipo isspace.
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == ' '))
	{
		i++;
	}
	if ((str[i] == '+') || (str[i] == '-'))//busca el signo
	{
		if (str[i] == '-')
			sign = -sign;//cambia el signo si es negativo.
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		/*Convierte el carácter al valor numérico que representa
		y lo acumula en result. 
		Multiplica por 10 para desplazar los dígitos a la izquierda.
		Restar '0' convierte el carácter numérico a su valor entero.
		Y así sucesivamente hasta que no haya más dígitos.
		Por ejemplo: "123" 
		 		->result=0 * 10 + str[1] - 48 =0 + 49 - 48 =1
				->result=1 * 10 + str[2] - 48 =10 + 50 - 48 =12
				->result=12 * 10 + str[3] - 48 =120 + 51 - 48 =123
				Final:
				->result=123
		*/
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char	str[] = "	-576367";
	printf("%d\n", ft_atoi(str));
	return (0);
}
