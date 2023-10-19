#include "main.h"

int main(void)
{
	char *s = "My initials are E and A and I am 21 years old";

	printf("strlen: %d\n", strlen(s));
	_printf("My initials are %c and %c and I am %d years old",'E', 'K', 21);
	return (0);
}
