/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivas-v <irivas-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:34:46 by irivas-v          #+#    #+#             */
/*   Updated: 2026/04/21 10:13:32 by irivas-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
// La función 'static' solo es visible dentro del mismo archivo .c donde está definida, 
// y no puede ser llamada desde otro archivo del proyecto.

// Función que cuenta el número de dígitos necesarios para representar el entero 'n' como una cadena.
static	int	ft_digits(int n)
{
	int	i;

	i = 0;
	printf("%d\n",(i));
	if (n == 0)
		return (1);		// Si n es 0, se necesita un dígito para representarlo.
	if (n < 0)
	{
		n = n * (-1);
		i++;
		printf("N positivo: %d\n",(n));
		printf("Cifra del signo: %d\n",(i));
	}
	while (n != 0)
	{
		n = n / 10;		// Divide n por 10 para eliminar el último dígito. 
						// Ejemplo: 1234 -> 123, luego 12, luego 1, luego 0.
		i++;
		printf("Contador: %d\n",(i));
	}
	printf("Nº de cifras final: %d\n",(i));
	return (i);
}

/*
Utilizando malloc(3), genera una string que represente el valor entero
recibido como argumento. Los números negativos tienen que gestionarse.
Argumentos:
	-> n: el entero a convertir.
Valor devuelto: 
	-> La string que represente el número.
NULL si falla la reserva de memoria.
*/
char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	long	num;	// Usar long para manejar el caso de -2147483648.

	num = n;
	len = ft_digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';	// En realidad es la posición 'str[2]'.
	if (num < 0)
	{
		str[0] = '-';
		printf("str con signo: %s\n",(str));
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	printf("N antes de bucle: %ld\n",(num));
	while (num > 0)
	{
		len--;
		str[len] = ((num % 10) + '0');	// Convierte el último dígito de num a carácter.
										// ejemplo: si num es 123, num % 10 es 3, y '0' + 3 es '3'.
		printf("rellenando str: %c\n",str[len]);
		printf("N en bucle: %ld\n",(num));
		num = num / 10;					// Elimina el último dígito de num.
	}
	
	return (str);
}

int	main(void)
{
	char	*str;
	int	n = -2147483648;
	
	printf("%d\n",(n));
	str = ft_itoa(n);
	printf("n trasnformado en str: %s\n", str);
	printf("  INT_MIN  = %d\n", INT_MIN);
	printf("  INT_MAX  = %d\n", INT_MAX);
    printf("  UINT_MAX = %u\n\n", UINT_MAX);
	return (0);
}