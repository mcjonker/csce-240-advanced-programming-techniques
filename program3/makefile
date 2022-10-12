# makefile for program2
flags = -std=c++17 -Wall -I .     
compile = g++ $(flags) -c 
link = g++ $(flags) -o 

style : word_search_functions.cc 
	cpplint word_search_functions.cc

word_search_functions.o : word_search_functions.cc word_search_functions.h
	$(compile) word_search_functions.cc

program3.o : program3.cc word_search_functions.h
	$(compile) program3.cc

program3 : word_search_functions.o program3.o
	$(link) program3 program3.o word_search_functions.o

test : program3
	./program3

clean :
	rm *.o program3 

