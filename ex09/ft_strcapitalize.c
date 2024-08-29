
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int i;
	int word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			word = 0;
		}
		else if (!word && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
        
		if ((str[i] < 'A' || str[i] > 'Z') && 
			(str[i] < 'a' || str[i] > 'z') && 
			(str[i] < '0' || str[i] > '9'))
		{
			word = 1;
		}
		else
		{
			word = 0;
		}
        	i++;
	}
    
	return (str);
}
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf ("%s", ft_strcapitalize(str));
	return (0);
}
