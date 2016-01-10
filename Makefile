CFLAGS = -O0
CC = clang++ $(CFLAGS)

lake: main.o lex.o

main.o: main.cpp main.h
	$(CC) -c main.cpp

lex.o: lex.cpp lex.h
	$(CC) -c lex.cpp

clean: 
	$(RM) a.out lake *.o