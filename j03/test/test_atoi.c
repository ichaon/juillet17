#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%i \n", atoi("-2147483648"));
	printf("%i \n", atoi("2147483647"));
	printf("%i \n", atoi("\n\r\t\v \f123"));
	printf("%i \n", atoi("\n\r\t\v\f -123"));
	printf("%i \n", atoi("0"));
	printf("%i \n", atoi("-+21474 83648"));
	printf("%i \n", atoi("+-83647"));
	printf("%i \n", atoi("+--+-+-123"));
	printf("%i \n", atoi("\n\r\t\v\f -21474836472"));
	printf("%i \n", atoi("3000000000"));
	return (0);
}
