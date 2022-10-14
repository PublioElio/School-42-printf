/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:37:56 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/10/13 15:40:08 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_format(va_list va, char c, size_t *counter)
{
	if (c == 'c')
		ft_putchar_pf(c, counter);
	else if (c == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (c == 'p')
		ft_putpointer_pf(va_arg(va, unsigned long *), counter);
	else if (c == 'i' || c == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (c == 'u')
		ft_putunsigned_pf(va_arg(va, unsigned int), counter);
	else if (c == 'x' || c == 'X')
		ft_puthex_pf(va_arg(va, unsigned int), counter);
	else if (c == '%')
		ft_putchar_pf(c, counter);
}

int	ft_printf(char const *str, ...)
{
	va_list		va;
	size_t		*counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, *str, counter);
		}
		else
			ft_putchar_pf(*str, counter);
		str++;
	}
	va_end(va);
	return (*counter);
}
