/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:22:36 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/29 16:28:42 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	 int	h;
	 int	m;
	 char	*str;

	 str = (char *)malloc(2 * sizeof(char));
	 h = hours / 100;
	 m = hour % 100;
	 str[0] = 'A';
	 str[1] = 'A';

	 if (h == 0)
		 h += 12;
	 else if (h == 11)
	 {
		str[1] = 'P';
	 }
	 else if (h >= 12 && h <= 23)
	 {
		str[0] = 'P';
		str[1] = 'P';
		h -= 12;
	 }
	 printf("THE FOLLOWING TAKES PLACE BETWEEN %d.%2d %c.M. AND %d.%2d %c.M.\n");
}
