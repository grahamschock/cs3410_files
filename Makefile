make: statcheck.o stdincopyexercise.o

statcheck.o: statcheck.c
	gcc -o statcheck statcheck.c

stdincopyexercise.o: stdincopyexercise.c
	gcc -o stdincopyexercise stdincopyexercise.c

make clean: 
	rm stdincopyexercise
	rm statcheck
