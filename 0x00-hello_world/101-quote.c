#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
char msg[] = and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = sizeof(msg) - 1;
ssize_t written = 0;

while (written < len)
written += write(STDERR_FILENO, msg + written, len - written);

return (1);
}
