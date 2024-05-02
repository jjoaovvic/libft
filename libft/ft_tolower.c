int	ft_tolower(int ch)
{
	if ((unsigned char)ch >= 'A' && (unsigned char)ch <= 'Z')
		ch = (unsigned char)ch + 32;
	return (ch);
}
