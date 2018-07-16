/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 19:53:19 by ssundara          #+#    #+#             */
/*   Updated: 2018/07/03 09:45:20 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_c(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		n;
	char	*temp;

	j = 0;
	n = get_c(tab);
	while (j < n - 1)
	{
		i = j + 1;
		while (i < n)
		{
			if (cmp(tab[j], tab[i]) > 0)
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
