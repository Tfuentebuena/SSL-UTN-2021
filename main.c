#include <stdio.h>
#include "/home/tfuentebuena/Workspaces/SSL/scanner.h" //Cambiarlo para que apunte correctamente al archivo
#include <ctype.h>

enum TOKENS
{
    FDT = EOF,
    SEP = ',',
    CAD = !isspace
};

int main(void)
{
    char token;
    int printString = 0;
    int printLine = 0;

    while ((token = get_token()) != FDT)
    {
        int NotPrintString = !printString;
        switch (token)
        {
        case ' ':
            if (printString)
            {
                printf("\n");
            }
            printString = 0;
            continue;

        case SEP:
            if (printString)
            {
                printString = 0;
                printf("\n");
            }
            printf("Separador: ");
            printLine = 1;

        default:
            if (!printString)
            {
                printf("Cadena: ");
                printLine = 1;
                printString = 1;
            }

        }

        printf("%c", token);

        if (printLine && !printString)
        {
            printLine = 0;
            printf("\n");
        }
    }
    printf("Fin de texto: \n");

    return 0;
}