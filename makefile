CC = gcc
CFLAGS = -I.
DEPS = bubblesort.h
OBJ = bubblesort.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bubblesort: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)


clean:
		rm -f *.o bubblesort
