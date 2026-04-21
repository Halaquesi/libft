/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:14:18 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 15:38:42 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Chequea si 'c' es alfanumérico; equivalente a (isalpha(c) || isdigit(c))
'c' es letra (a-z o A-Z) o un dígito (0-9)
Valor devuelto: 
	-> si no es alfanumérico, devuelve 0.
*/
int	ft_isalnum(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

