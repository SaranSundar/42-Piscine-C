/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:53:58 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/29 14:08:27 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printarr(char *arr)
{
	int		i;
	i = 0;
	while (arr[i] != '\0')
	{
		write(1, &arr[i], 1);
		i++;
	}
}

void	ft_generic(void)
{
	char	*str;
   
	str	= "Tut tut ; Tut tut\n";
	ft_printarr(str);
}

int		main(void)
{
	ft_generic();
}
