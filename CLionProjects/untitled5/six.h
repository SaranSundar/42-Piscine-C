/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 15:24:37 by ssundara          #+#    #+#             */
/*   Updated: 2018/07/02 15:25:29 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIX_H
# define SIX_H
# include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putstr("2147483648");
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s2[i] != '\0')
	{
		if (s2[i] != s1[i])
			return (0);
		i++;
	}
	return (1);
}

#endif