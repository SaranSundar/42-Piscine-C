/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:03:42 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/26 12:38:20 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <memory.h>

int		str_length(char *str)
{
    int		index;

    index = 0;
    while (str[index] != '\0')
        index++;
    return index;
}


int		ft_strcmp(char *s1, char *s2)
{
    int index;
    int length1;
    int length2;

    index = 0;
    length1 = str_length(s1);
    length2 = str_length(s2);
    if (length2 != length1)
        return (length1 - length2);
    while (s1[index] == s2[index] && index < length1)
        index++;
    if (index == length1)
        return (0);
    return (s1[index] - s2[index]);
}

int     main(void)
{
    char s1[] = "A";
    char s2[] = "";
    printf("cmp is %d\n", ft_strcmp(s1, s2));
    printf("cmp is %d\n", strcmp(s1, s2));
}