#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%i \n", ft_atoi("-2147483648"));
//	printf("%i \n", atoi("-2147483648"));
	printf("%i \n", ft_atoi("2147483647"));
//	printf("%i \n", atoi("2147483647"));
	printf("%i \n", ft_atoi("0"));
//	printf("%i \n", atoi("0"));
	printf("%i \n", ft_atoi("\n\r\t\v \f123"));
//	printf("%i \n", atoi("\n\r\t\v \f123"));
	printf("%i \n", ft_atoi("\n\r\t\v \f-123"));
//	printf("%i \n", atoi("\n\r\t\v \f-123"));
	printf("%i \n", ft_atoi("\n\r\t\v \f+123"));
//	printf("%i \n", atoi("\n\r\t\v \f+123"));
	printf("%i \n", ft_atoi("\n\t\r\v \f+-123"));
//	printf("%i \n", atoi("\n\t\r\v \f+-123"));
	printf("%i \n", ft_atoi("\n\t\r\v \f-+123"));
//	printf("%i \n", atoi("\n\t\r\v \f-+123"));
	printf("%i \n", ft_atoi("\n\r\t\v \f123-123"));
//	printf("%i \n", atoi("\n\r\t\v \f123-123"));
	printf("%i \n", ft_atoi("\n\t\r\v \f123+123"));
//	printf("%i \n", atoi("\n\t\r\v \f123+123"));
	printf("%i \n", ft_atoi("123\n123"));
//	printf("%i \n", atoi("123\n123"));
	printf("%i \n", ft_atoi("a123"));
//	printf("%i \n", atoi("a123"));
	printf("%i \n", ft_atoi("123a123"));
//	printf("%i \n", atoi("123a123"));
	return (0);
}
