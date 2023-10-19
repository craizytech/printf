#include "main.h"

int main(void)
{
	char *s = "My Name is Eammon";

	printf("strlen: %d\n", strlen(s));
	_printf("My Name is %s", "Eammon");
	printf("\n");
	_printf("My Initials %% are %c.%c", 'E', 'K');
	return (0);
}
