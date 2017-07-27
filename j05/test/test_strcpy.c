#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int		main()
{
	char temp[255];
	strcpy(&temp, "Gladir");
	strcpy(&temp, "ABC");
	strcpy(&temp, "Gladir.com");
	puts(&temp);
	return (0);
}
