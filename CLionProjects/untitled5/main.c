/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 11:56:51 by ssundara          #+#    #+#             */
/*   Updated: 2018/07/02 15:30:19 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "six.h"

int		stoi(char *str)
{
    int		i;
    int		sign;
    int		val;

    i = 0;
    val = 0;
    sign = 1;
    if (str[i] != '\0' && str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            break ;
        else
            val = ((val * 10) + (str[i] - '0'));
        i++;
    }
    return (sign * val);
}

void	helpme(char *argv[], int *ans, int val1, int val2)
{
    if (ft_strcmp(argv[2], "+") == 1)
        *ans = val1 + val2;
    if (ft_strcmp(argv[2], "-") == 1)
        *ans = val1 - val2;
    if (ft_strcmp(argv[2], "*") == 1)
        *ans = val1 * val2;
    if (ft_strcmp(argv[2], "/") == 1)
    {
        if (val2 == 0)
            write(1, "Stop : division by zero", 23);
        else
            *ans = val1 / val2;
    }
    if (ft_strcmp(argv[2], "%") == 1)
    {
        if (val2 == 0)
            write(1, "Stop : modulo by zero", 21);
        else
            *ans = val1 % val2;
    }
}

void	solve(char *argv[])
{
    int		val1;
    int		val2;
    int		ans;

    if (!(ft_strcmp(argv[2], "+") == 1 || ft_strcmp(argv[2], "-") == 1
          || ft_strcmp(argv[2], "/") == 1
          || ft_strcmp(argv[2], "%") == 1
          || ft_strcmp(argv[2], "*") == 1))
        write(1, "0", 1);
    else
    {
        ans = -51866583;
        val1 = stoi(argv[1]);
        val2 = stoi(argv[3]);
        helpme(argv, &ans, val1, val2);
        if (ans != -51866583)
            ft_putnbr(ans);
    }
    write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
    if (argc == 4)
        solve(argv);
    return (0);
}