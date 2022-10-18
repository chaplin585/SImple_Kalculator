Kalkulator: main.o
    gcc main.o

main.o: src/main.c
    gcc -cpp main.cpp -o main.o