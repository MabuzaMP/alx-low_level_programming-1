#include <stdio.h>
/**
 * main- function that print the name of file
 * @argc: the argument counter for char
 * @argv: the argument value for char
 * Return: Always 0 ( success)
 */

int main(int argc, char *argv[])
{
char *name = argv[0];
printf("%s\n", name);
return 0;
}
