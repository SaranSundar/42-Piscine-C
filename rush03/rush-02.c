/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:35:22 by sosong            #+#    #+#             */
/*   Updated: 2018/06/24 20:22:42 by sosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		conv(char *str);

void	print2(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == 0 && j + 1 == x))
		ft_putchar('A');
	else if ((j == 0 && i + 1 == y) || (j + 1 == x && i + 1 == y))
		ft_putchar('C');
	else if (i == 0 || i + 1 == y)
		ft_putchar('B');
	else if (j == 0 || j + 1 == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush02(int x, int y)
{
	int i;
	int j;

	i = 0;
	if (x == 0 || y == 0)
		return ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print2(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		rush02(conv(argv[1]), conv(argv[2]));
}
