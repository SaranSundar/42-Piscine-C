int		conv(char *str)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		sum = sum * 10;
		sum = sum + (int)(str[i] - '0');
		i++;
	}
	return (sum);
}
