/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:24:55 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 10:33:01 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
Asigna memoria para un array de 'nmemb' elementos de tamaño 'size' e inicializa 
a cero. Devuelve un puntero la memoria reserveda.
Argumentos:
	-> nmemb: el número de elementos.
	-> size: el tamaño de los elementos.
Valor devuelto: 
	-> ptr: puntero que apunta a la memoria asignada y ya inicializada a cero.
	NULL si la asignación con 'malloc' falla.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;	// Puntero para la memoria asignada
	size_t i;
	
	ptr = malloc(nmemb * size);	// Asigna memoria para nmemb
								// elementos de tamaño size.
	if (ptr == NULL)
		return (NULL);	// Retorna NULL si la asignación falla.
						// Inicializa la memoria asignada a cero.
	i = 0;
	while (i < (nmemb * size))// Mientras i sea menor que el total 
								// de bytes asignados, recorre cada byte.
	{
		((unsigned char *)ptr)[i] = 0;	// Convierte el puntero a 
										// unsigned char para 
										// recorrer byte a byte.
		i++;
	}
	return (ptr);	// Retorna el puntero a la memoria asignada 
					// e inicializada a cero.
}