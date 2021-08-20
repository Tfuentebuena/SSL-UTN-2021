#include <stdio.h>
//#include <scanner.h>
#include <scanner.c>

int main()
{
    FILE *f = fopen("entrada.txt", "r");
    if (f == NULL)
    {
        printf("Error opening the file");
        exit(-1);
    }
    get_token(f);
}