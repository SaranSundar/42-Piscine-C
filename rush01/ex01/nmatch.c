/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 21:03:17 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/30 22:33:43 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		same(char a, char b)
{
    if (a == b)
        return (1);
    else
        return (0);
}

int		update_count(const int *i1, const int *i2, const char *s1, const char *s2, int *matches) {
    int temp1;
    int temp2;

    temp1 = *i1;
    temp2 = *i2;
    while (s2[temp2] == '*')
        temp2 = temp2 + 1;
    if (s2[temp2] == '\0') {
        //*i2 = *i2 + 1;
        *matches = *matches + 1;
        return (1);
    }
    while (s1[temp1] != s2[temp2] && s1[temp1] != '\0')
        temp1 = temp1 + 1;
    if (s1[temp1] == '\0') {
        //*i1 = *i1 + 1;
        return (0);
    }
    *matches = *matches + 1;
    return (1);
}

int		nmatch(char *s1, char *s2)
{
    int i1;
    int i2;
    int matches;

    i1 = 0;
    i2 = 0;
    matches = 0;
    while (s2[i2] != '\0')
    {
        if (!same(s1[i1], s2[i2]))
        {
            if (s2[i2] == '*')
            {
                if (s2[i2 + 1] == '*')
                    matches = matches + 1;
                if (update_count(&i1, &i2, s1, s2, &matches) == 0)
                    return (0);
            }
            else
                return (0);
        }
        i1++;
        i2++;
    }
    return (matches);
}

int		main(int argc, char *argv[])
{
    if (argc != 3)
        printf("Error: Must Have Only 2 Strings To Match.\n");
    else
        printf("Comparing Strings %s and %s, match count is %d\n", argv[1], argv[2], nmatch(argv[1], argv[2]));
}

