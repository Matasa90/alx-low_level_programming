#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
const char *msg = and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = strlen(msg);
write(STDERR_FILENO, msg, len);
return (1);
}
