/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 17:28:41 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/28 16:11:42 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char	*ft_cpystr(char *str)
{
    char	*s;
    int		len;
    int		i;

    i = 0;
    len = ft_strlen(str);
    s = (char *)malloc(len * (sizeof(char)));
    while (str[i] != '\0')
    {
        s[i] = str[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}

void	set_zero(int *a, int *b, int *c)
{
    *a = 0;
    *b = 0;
    *c = 0;
}

void	init_vars(int *height, char **temp, char ***arr, char *str)
{
    *height = ft_strlen(str);
    *temp = (char *)malloc(*height * (sizeof(char)));
    *arr = (char **)malloc(*height * (sizeof(char *)));
}

int		check_char(char *str, int i, char *charset)
{
    int n;

    n = 0;
    while (charset[n] != '\0')
    {
        if (str[i] == charset[n])
            return (1);
        n++;
    }
    return (0);
}

char	**ft_split(char *str, char *charset)
{
    char	**arr;
    int		i;
    int		arr_i;
    int		height;
    int		temp_i;
    char	*temp;

    set_zero(&i, &arr_i, &temp_i);
    init_vars(&height, &temp, &arr, str);
    while (i <= height)
    {
        if (check_char(str, i, charset) == 1 || str[i] == '\0')
        {
            if (*temp != '\0')
            {
                arr[arr_i] = (char *)malloc(height * (sizeof(char)));
                temp[temp_i] = '\0';
                arr[arr_i] = ft_cpystr(temp);
                arr_i++;
            }
            temp_i = -1;
            temp = (char *)malloc(height * (sizeof(char)));
        }
        else
            temp[temp_i] = str[i];
        temp_i++;
        i++;
    }
    arr[arr_i] = 0;
    return (arr);
}

int main()
{
    char** res;
    for (res = ft_split("asdf qwerty zxcv", " "); *res != 0; res++)
        printf("'%s',", *res);
    printf("\n");
    for (res = ft_split("s1_s2___++++___s3", "_+"); *res != 0; res++)
        printf("'%s',", *res);
    printf("\n");



    return 0;
}
