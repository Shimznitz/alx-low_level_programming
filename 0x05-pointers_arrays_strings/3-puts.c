#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts - sends string to std output
 * @str: input string
 * Return: void
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
