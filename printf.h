/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:41:01 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/10/13 15:41:05 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/*
# define DECIMAL_BASE "0123456789"
# define HEXADECIMAL_U_BASE "0123456789ABCDEF"
# define HEXADECIMAL_L_BASE "0123456789abcdef"
*/
int		ft_printf(char const *str, ...);

void	ft_putchar_pf(char c, size_t *counter);
void	ft_putstr_pf(char *str, size_t *counter);
void	ft_putpointer_pf(unsigned long *p, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putunsigned_pf(unsigned int num, size_t *counter);
void	ft_puthex_pf(unsigned int num, size_t *counter);

#endif
