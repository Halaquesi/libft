/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:21:55 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 15:39:08 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Chequea si 'c' es caracter alfabético; equivalente a isupper(c) || islower(c)
(a-z o A-Z)
Valor devuelto: 
	-> si no es letra, devuelve 0.
*/
int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}

