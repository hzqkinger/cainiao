//CC-gcc

//CFLAGS- -Wall -g

//# VAR-VALUE  USE var	 $(var)

main : pb.o
	gcc $^ -o $@


pb.o : pb.c
	gcc -c $^ -o $@

clean:
	rm -rf *.o


//	$(CC) -C $^ -O $@
