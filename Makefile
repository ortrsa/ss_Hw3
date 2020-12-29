FLAG= -Wall -g

all: txtfind isort

txtfind: main.o txtfind.o
	gcc $(FLAG) -o txtfind main.o txtfind.o

main.o: main.c txtfind.h
	gcc $(FLAG) -c main.c

txtfind.o: txtfind.c txtfind.h
	gcc $(FLAG) -c txtfind.c

isort: main1.o isort.o
	gcc $(FLAG) -o isort main1.o isort.o

main1.o: main1.c isort.h
	gcc $(FLAG) -c main1.c

isort.o: isort.c isort.h
	gcc $(FLAG) -c isort.c

.PHONY: clean all

clean:
	rm -f *.o isort txtfind
