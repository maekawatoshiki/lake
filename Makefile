CFLAGS = -O0
CC = clang++ $(CFLAGS)

lake: main.o lex.o lake.o vm.o object.o parser.o token.o
	$(CC) main.o lex.o lake.o vm.o object.o parser.o token.o -o lake

main.o: main.cpp main.h
	$(CC) -c main.cpp

lake.o: lake.cpp lake.h
	$(CC) -c lake.cpp

vm.o: vm.cpp vm.h
	$(CC) -c vm.cpp

object.o: object.cpp object.h
	$(CC) -c object.cpp

parser.o: parser.cpp parser.h
	$(CC) -c parser.cpp

token.o: token.cpp token.h
	$(CC) -c token.cpp

lex.o: lex.cpp lex.h
	$(CC) -c lex.cpp

clean: 
	$(RM) a.out lake *.o
