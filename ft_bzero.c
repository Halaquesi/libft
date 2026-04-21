/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:08:54 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 10:27:19 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Rellena de ceros ('\0') los 'size' primeros bytes del área de memoria apuntada por 's'.
Si size es 0, no hace nada.
Argumentos:
	-> *str: puntero a memoria que se quiere borrar.
	-> size: número que indica el tamaño de memoria a borrar.
Valor devuelto: 
	-> si no hay dígitos, devuelve 0.
*/
void	ft_bzero(void *s, size_t size)
{
	unsigned char	*ptr;
	size_t				i;

	i = 0;
	ptr = (unsigned char *)s;	// Convierte el puntero genérico a un puntero unsigned char
	while (i < size)			// porque va a ir saltando byte a byte.
	{
		ptr[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char    str[12] = "HolaQueTal";
	size_t  size = 5;
	
	write(1, "Antes: ", 7);
	write(1, str, 10);
	write(1, "\n", 1);
	
	ft_bzero(str, size);
	// Printf no puede mostrar caracteres nulos, por eso uso write.
	write(1, "Después: ", 10);
	write(1, str, 10);
	write(1, "\n", 1);
	
	return (0);
}
