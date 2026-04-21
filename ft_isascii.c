/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:48:22 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 15:35:23 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Determina si un carácter 'c' es un carácter ASCII válido
(es decir, su valor está entre 0 y 127, inclusive).

Valor devuelto: 
	-> si no es ASCII, devuelve 0.
*/
int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}

