#include <stdio.h>
#include <stdlib.h>
#include "token.h"


int yylex(void);


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Uso: ./cminus <arquivo.cm>\n");
        return 1;
    }

    yyin = fopen(argv[1], "r");

    if (yyin == NULL){
        printf("Erro ao abrir o arquivo: %s\n", argv[1]);
        return 1;
    }
    int token;
    do {
        token = yylex();

        printf("%-15s lexema: %-10s linha: %d\n", token_type_to_string(token), yytext, yylineno);
    } while (token != TOKEN_EOF);

    fclose(yyin);

    return 0;
}