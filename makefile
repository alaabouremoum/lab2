all: menu.exe

menu.exe: menu.o abs_max.o abs_min.o diff.o sum.o
	gcc -o menu.exe menu.o abs_max.o abs_min.o diff.o sum.o

menu.o: menu.c 
	gcc -c menu.c

abs_max.o: abs_max.c 
	gcc -c abs_max.c

abs_min.o: abs_min.c 
	gcc -c abs_min.c

diff.o: diff.c abs_max.o abs_min.o
	gcc -c diff.c

sum.o: sum.c abs_max.o
	gcc -c sum.c

clean:
	del *.o menu.exe

    