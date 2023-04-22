#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int 	len;
	char	*dest;
		
	len = ft_strlen(src);
	dest = (char*)malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/*int main(void)
{
	char *str1;
	char *str2;

	str1 = "mehmet ali";
	printf("%s\n", str1);
	str2 = ft_strdup(str1);
	printf("%s",str2);
	return (0);
}*/

