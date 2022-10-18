Kalkulator : main.o
	gcc main.o -o Kalkulator

main.o : src/main.c
	gcc -c src/main.c -o main.o

clean:
	rm Kalkulator *.o