#include <unistd.h>

/**
 *main - Outout text without the use of puts and printf
 *
 *Returns: Always 1 (Successful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}