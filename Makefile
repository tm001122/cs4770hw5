# Makefile to compile TBD.c into smash.out executable

CC = gcc                     # Compiler
CFLAGS = -fno-stack-protector # Disable stack protector
TARGET = hulksmash           # Name of the executable
SRC = TBD.c                  # Source file

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET) *.o

# Phony targets to avoid filename conflicts
.PHONY: all clean
