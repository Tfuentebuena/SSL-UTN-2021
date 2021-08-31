#include <stdio.h>
#include "scanner.h"
#include <ctype.h>


int get_token()
{
    char character;

    while((character = getchar()) != EOF)
    {
        if (isspace(character))
        {
            return ' ';
        } else {
            return character;
        } 
    }
    return EOF;
}

