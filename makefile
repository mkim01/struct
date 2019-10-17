all: struct.c
	gcc -o program struct.c

run:
	./program

clean:
	rm *.o
