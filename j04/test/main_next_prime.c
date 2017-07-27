#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main()
{
	printf("%d \n", ft_find_next_prime(4));
	printf("%d \n", ft_find_next_prime(18));
	printf("%d \n", ft_find_next_prime(38));
	printf("%d \n", ft_find_next_prime(44));
	printf("%d \n", ft_find_next_prime(48));
	printf("%d \n", ft_find_next_prime(500000003));
}
