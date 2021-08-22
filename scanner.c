
#include <scanner.h>


enum TOKENS {FDT = EOF, SEP = ',', CAD = !isspace};

char get_token(FILE *input)
{
    char c;
    while (!feof(input))
    {
        c = getchar();
        if(c == FDT)
        {
            printf("Fin de texto:" + c);
        }

        if(c == SEP)
        {
            printf("Separador" + c);
        }

        if(c == CAD)
        {
            printf("Cadena: " + c);
        }

    }
}