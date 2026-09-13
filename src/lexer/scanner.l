%{
#include "token.h"
%}

%option noyywrap
%option yylineno

%%

"if"        { return TOKEN_IF; }
"else"      { return TOKEN_ELSE; }
"int"       { return TOKEN_INT; }
"void"      { return TOKEN_VOID; }
"return"    { return TOKEN_RETURN; }
"while"     { return TOKEN_WHILE; }

[ \t\r\n]+  { /* ignora espaços */ }

<<EOF>>     { return TOKEN_EOF; }

.           { return TOKEN_ERROR; }

%%