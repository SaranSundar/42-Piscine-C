/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:56:24 by sosong            #+#    #+#             */
/*   Updated: 2018/07/07 23:57:20 by sosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);
int		conv(char *str);

char	*print0(int x, int y, int *arr, char**s)
{
	char *str;
	
	str = *s;
	if ((arr[0] == 0 || ((arr[0] + 1) == y)) && (arr[1] == 0 || ((arr[1] + 1) == x)))
	{
		ft_putchar('o');
		str[arr[2]] = 'o';
	}
	else if (arr[0] > 0 || arr[1] > 0)
	{
		if (arr[1] == 0 || ((arr[1] + 1) == x))
		{
			ft_putchar('|');
			str[arr[2]] = '|';
		}
		else if (arr[0] == 0 || ((arr[0] + 1) == y))
		{
			ft_putchar('-');
			str[arr[2]] = '-';
		}
		else
		{
			ft_putchar(' ');
			str[arr[2]] = ' ';
		}
	}
	return (str);
}

void	rush00(int x, int y)
{
	int i;
	int j;
	int *arr;
	char *str;

	arr = (int *)malloc(3*sizeof(int));
	str = (char *)malloc(((x*y)+1) * sizeof(char));
	arr[2] = 0;
	if (x == 0 || y == 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			arr[0] = i;
			arr[1] = j;
			print0(x, y, arr, &str);
			arr[2] = arr[2] + 1;
			str[arr[2]] = '\0';
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		rush00(conv(argv[1]), conv(argv[2]));
	return (0);
}
