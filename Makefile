#
# Makefile for CS 70 IntList Assignment
#
# As usual, you can build this software by typing
#
#     make
#

all: intlist-test

practiceClass-test: practiceClass-test.o practiceClass.o testing-logger.o
	clang++ -o practiceClass-test practiceClass-test.o practiceClass.o testing-logger.o

practiceClass.o: practiceClass.cpp practiceClass.hpp testing-logger.hpp
	clang++ -c -g -std=c++1z -Wall -Wextra -pedantic practiceClass.cpp

testing-logger.o: testing-logger.cpp testing-logger.hpp
	clang++ -c -g -std=c++1z -Wall -Wextra -pedantic testing-logger.cpp

practiceClass-test.o: practiceClass-test.cpp practiceClass.hpp testing-logger.hpp
	clang++ -c -g -std=c++1z -Wall -Wextra -pedantic practiceClass-test.cpp

clean:
	rm -rf practiceClass-test *.o *.dSYM
