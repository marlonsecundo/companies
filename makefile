CC=g++
#.DEFAULT_GOAL=calculadora


company.o: company.cpp company.h
		$(CC) company.cpp -c

#menu.o: menu.cpp menu.h
#		$(CC) menu.cpp -c

#calculadora: calculadora.cpp sub.o soma.o mult.o div.o menu.o
#		$(CC) calculadora.cpp sub.o soma.o mult.o div.o menu.o -o calculadora

#clear:
#		rm *.o
#		rm calculadora
