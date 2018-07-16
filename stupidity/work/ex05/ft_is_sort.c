/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 11:21:19 by ssundara          #+#    #+#             */
/*   Updated: 2018/07/02 11:41:41 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		bubble_sort(int arr[], int n, int (*f)(int, int))
{
	int		i;
	int		j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (f(arr[j], arr[j + 1]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (bubble_sort(tab, length, f));
}
