CC = gcc

CFLAGS = -Wall -Wextra -Iinclude

TARGET = cminus

SRC = src/main.c \
      src/lexer/token.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

run:
	./$(TARGET) tests/test.cm