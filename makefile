main: main.o tools.o
	gcc -o $@ $^

main.o: main.c tools.h
	gcc -c $<

tools.o: tools.c
	gcc -c $<
