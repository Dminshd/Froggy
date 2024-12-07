CC = clang
TARGET = Build/
PROJECT = Froggy

SRC = $(wildcard Src/*.c)

DEBUG :
	$(CC) -o $(TARGET)$(PROJECT) $(SRC)
