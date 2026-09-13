#ifndef TOKEN_H
#define TOKEN_H


/*Lista de Tokens para poder classificar quando o lexer encontrar os codigos*/
typedef enum
{
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_INT,
    TOKEN_VOID,
    TOKEN_RETURN,
    TOKEN_WHILE,

    TOKEN_ID,
    TOKEN_NUM,

    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_TIMES,
    TOKEN_DIVIDE,

    TOKEN_LT,
    TOKEN_LTE,
    TOKEN_GT,
    TOKEN_GTE,
    TOKEN_EQ,
    TOKEN_NEQ,

    TOKEN_ASSIGN,

    TOKEN_SEMICOLON,
    TOKEN_COMMA,

    TOKEN_LPAREN,
    TOKEN_RPAREN,

    TOKEN_LBRACKET,
    TOKEN_RBRACKET,

    TOKEN_LBRACE,
    TOKEN_RBRACE,

    TOKEN_EOF,
    TOKEN_ERROR

} TokenType;



typedef struct
{
    TokenType type;
    char *lexeme; /*Texto do código*/
    int line; /*Pode tirar depois, é para teste*/
} Token;

const char *token_type_to_string(TokenType type);

#endif