CC = gcc
FILE = main.c

all:
	$(CC) -c ./build/out.obj ./src/$(FILE) -o ./build/out.exe && "./build/out.exe"

clean:
	rm ./build/out.exe