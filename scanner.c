#include <stdio.h>
#include <scanner.h>
#include <ctype.h>
#include <stdbool.h>

enum TOKENS
{
    FDT,
    SEP,
    CAD
};

int char_type(char character)
{
    switch (character)
    {
    case EOF:
        return FDT;
    case ',':
        return SEP;
    default : 
        return CAD;
    }
}
bool terminal(char character)
{
    return 
        char_type(character) == FDT ||
        char_type(character) == SEP ? true : false;
}

bool not_terminal(char character)
{
    return char_type(character) == CAD; 
}

int get_token(char *buffer)
{
    int character = getchar();

    if (buffer == NULL)
    {
        buffer = (char *)malloc(sizeof(*buffer) + 1);
        *buffer = character;
    }
    else
    {
        perror("Buffer already exists, Kaboom");
        return -1;
    }

    while (terminal(character))
    {
        character = getchar();
    }

    return 0;
}

char *get_type(int type)
{
}