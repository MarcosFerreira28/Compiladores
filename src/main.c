#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Uso: ./cminus <arquivo.cm>\n");
        return 1;
    }

    printf("Compilador C-\n");
    printf("Arquivo de entrada: %s\n", argv[1]);

    return 0;
}