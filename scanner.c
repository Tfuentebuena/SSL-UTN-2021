
#include <scanner.h>

enum TOKENS
{
    FDT = EOF,
    SEP = ',',
    CAD = !isspace
};

int get_token(char* buffer)
{
    int character = getchar();

    if(buffer == NULL)
    {
        buffer = (char *) malloc(sizeof(*buffer) + 1);
    }

    while(character != FDT)
    {
        character = getchar();
    }
}

char* get_type(int type)
{

}