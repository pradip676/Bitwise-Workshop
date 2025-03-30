#Compiler and flags
CC = gcc
CC_FLAGS = -g -Wall -std=c99
INCLUDE_DIR = -I.

EXE = bitwisemenu
objects = clz.o endian.o major1.o parity.o rotate.o

all: $(EXE)

$(EXE): $(objects)
	$(CC) $(CC_FLAGS) $(INCLUDE_DIR) $^ -o $@

$(objects): %.o: %.c
	$(CC) $(CC_FLAGS) -c $^ -o $@

# Clean build artifacts
clean:
	rm -f *.o $(EXE)
