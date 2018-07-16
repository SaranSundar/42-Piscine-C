#include "header.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

char	*read_input()
{
	char	ch;
	char	*str;
	int		i;

	str = (char*)malloc(3000 * sizeof(char));
	i = 0;
	while (read(STDIN_FILENO, &ch, 1) > 0 && ch != '\0')
	{
		write(1, &ch, 1);
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_countdim(char *str, int *rows, int *cols)
{
	int		i;
	int		check;

	i = 0;
	*rows = 0;
	*cols = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			*rows = *rows + 1;
			check = 1;
		}
		if (check == 0 && str[i] != '\n')
			*cols = *cols + 1;
		i++;
	}
}

char	*get_r(int i, int rows, int cols)
{
	if (i == 0)
		rush00(rows, cols);
	else if(i == 1)
		rush01(rows, cols);
	else if(i == 2)
		rush02(rows, cols);
	else if(i == 3)
		rush03(rows, cols);
	else if(i == 4)
		rush04(rows, cols);
	return (read_input());
}

void	solve(char *str)
{
	int		rows;
	int		cols;
	int		i;
	char	*s;

	i = 0;
	ft_countdim(str, &rows, &cols);
	while (i < 5)
	{
		s = get_r(i, rows, cols);
		if (ft_strcmp(str, s) == 0)
		{
			//print answer here
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	char *input;

	input = read_input();
	solve(input);
	free(input);
	return (0);
}
