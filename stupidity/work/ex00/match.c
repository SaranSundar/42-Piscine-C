/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 21:03:17 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/30 22:33:43 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		same(char a, char b)
{
	if (a == b)
		return (1);
	else
		return (0);
}

int		update_count(int *i1, int *i2, char *s1, char *s2)
{
	while (s2[*i2] == '*' && s2[*i2] != '\0')
		*i2 = *i2 + 1;
	if (s2[*i2] == '\0')
		return (1);
	while (s1[*i1] != s2[*i2])
		*i1 = *i1 + 1;
	if (s1[*i1] == '\0')
		return (0);
	return (1);
}

int		match(char *s1, char *s2)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;
	while (s2[i2] != '\0')
	{
		if (!same(s1[i1], s2[i2]))
		{
			if (s2[i2] == '*')
			{
				if (update_count(&i1, &i2, s1, s2) == 0)
					return (0);
			}
			else
				return (0);
		}
		else
		{
			i1++;
			i2++;
		}
	}
	return (1);
}
