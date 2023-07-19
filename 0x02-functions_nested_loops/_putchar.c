#include <unistd.h>
/**
 * _putchar - Will write the character c to stdout
 * @c: Character to be printed
 * Return: 1 (Success)
 * On error, return -1 and set error number appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
