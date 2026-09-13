CC = gcc
FLEX = flex

CFLAGS = -Wall -Wextra -Iinclude

TARGET = cminus


LEXER_SRC = src/lexer/scanner.l
LEXER_GEN = build/lex.yy.c

SRC = src/main.c \
      src/lexer/token.c \
      $(LEXER_GEN)

all: $(TARGET)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

$(LEXER_GEN): $(LEXER_SRC)
mkdir -p build
$(FLEX) -o $(LEXER_GEN) $(LEXER_SRC)

clean:
	rm -f $(TARGET)
	rm -rf build


run:
	./$(TARGET) tests/lexer/palavras_reservadas.cm