#include <stdio.h>
#include <scanner.h>
#include <scanner.c>

int main(void)
{
    int token = 0;
    char* buffer = NULL;

    token = get_token(buffer);

    while(buffer != NULL && token != (-1)) {

        printf("%d: %s", token, buffer);
        free(buffer);
        token = get_token(buffer);
    }

    return 0;

}