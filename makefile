make : exe
	./exe
exe : dsa.o main.o
	gcc -o exe dsa.o main.o
dsa.o : dsa.c dsa.h other.h
	gcc -c dsa.c
main.o : other.h dsa.h
	gcc -c main.c
clean : 
	rm *.o exe
