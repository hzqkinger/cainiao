main: main.o proccess.o proccess2.o
	gcc -o main main.o proccess.o proccess2.o
main.o: main.c proccess.h proccess2.h
	gcc -c main.c
proccess.o: proccess.c proccess.h
	gcc -c proccess.c
proccess2.o: proccess2.c proccess2.h
	gcc -c proccess2.c
clean:
	rm main.o proccess.o proccess2.o
