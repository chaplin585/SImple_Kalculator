Kalkulator : main.o
	g++ main.o -o Kalkulator

main.o : src/main.cpp
	g++ -c src/main.cpp -o main.o

clean:
	rm Kalkulator *.o