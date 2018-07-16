/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 19:53:19 by ssundara          #+#    #+#             */
/*   Updated: 2018/07/02 21:04:30 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int    ft_count_rows(char *tab[])
{
	int     i;
	i = 0;
	while (ft_strcmp(tab[i], "\0") != 0)
	{
		i++;
	}
	return i;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		n;
	char	*temp;

	j = 0;
	n = ft_count_rows(tab);
	while (j < n - 1)
	{
		i = j + 1;
		while (i < n)
		{
			if (ft_strcmp(tab[j], tab[i]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		j++;
	}
}

int     main(void)
{
	char arr[3][1] = {
			{'a'},
			{'c'},
			{'b'}
	};
	char **ptr = (void*)arr;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			printf("%c,", arr[i][j]);
		}
	}
	ft_sort_wordtab(ptr);
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			printf("%c,", arr[i][j]);
		}
	}
}