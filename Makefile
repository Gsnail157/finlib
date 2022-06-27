build: main.o tom.c
		gcc main.o tom.c -o build

main.o: main.c tom.h
	gcc -c main.c

tom.0: tom.c tom.h
	gcc -c tom.c

view:
	cat tom.h | less
	cat tom.c | less
	cat main.c | less

clean: 
	rm *.o build

