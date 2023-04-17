int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (8);
	}
	else if (c >= '0' && c <= '9')
	{
		return (8);
	}
	else
		return (0);
}
