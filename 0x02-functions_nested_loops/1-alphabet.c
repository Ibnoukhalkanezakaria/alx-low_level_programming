#include "main.h"

/**
 * using loop to write all the alphabet
 *
 * Return: the parameter
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
    _putchar('\n');
}
