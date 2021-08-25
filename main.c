#include <stdio.h>
#include "/home/tfuentebuena/Workspaces/SSL/scanner.h" //Cambiarlo para que apunte correctamente al archivo
#include <ctype.h>

enum TOKENS
{
    FDT = EOF,
    SEP = ',',
};

int main(void)
{
    char token;
    int printString = 0;
    int printLine = 0;
// Esta version imprime una cadena vacia de más
/*     while ((token = get_token()) != FDT)
    {
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
            printf("Separador: %c", token);
            printf("\n");
            printLine = 1;

        default:
            if (!printString)
            {
                printf("Cadena: ");
                printLine = 1;
                printString = 1;
            } 
        }

        if (token != SEP && token != ' ')
        {
            
            printf("%c", token);
        }

        if (printLine && !printString)
        {
            printLine = 0;
            printf("\n");
        }
    } */

      while ((token = get_token()) != FDT)
  {
    if (isspace(token))
    {
      if (printString)
      {
        printf("\n");
      }
      printString = 0;
      continue;
    }
    else if (token == SEP)
    {
      if (printString)
      {
        printString = 0;
        printf("\n");
      }
      printf("Separador: ");
      printLine = 1;
    }
    else if (!printString)
    {
      printf("Cadena: ");
      printLine = 1;
      printString = 1;
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