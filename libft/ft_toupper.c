int	ft_toupper(int ch)
{
	if ((unsigned char)ch >= 'a' && (unsigned char)ch <= 'z')
		ch = (unsigned char)ch - 32;
	return (ch);
}
