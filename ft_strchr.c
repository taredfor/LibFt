#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
			return ((char *)(str + i));
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(str + i));
	return (0);
}
