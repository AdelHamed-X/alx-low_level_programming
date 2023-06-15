#include <stdio.h>

/**
 * main - prits the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
printf("Size of a char: " + sizeof(char) + " byte(s)\n"
"Size of an int: " + sizeof(int) + " byte(s)\n"
"Size of a long int: " + sizeof(long int) + " byte(s)\n"
"Size of a long long int: " + sizeof(long long int) + " byte(s)\n"
"Size of a float: " + sizeof(float) + " byte(s)\n";
return (0);
}
