CC=g++
.DEFAULT_GOAL=main

employee.o: employee.cpp employee.h
		$(CC) employee.cpp -c

company.o: company.cpp company.h
		$(CC) company.cpp -c

manager.o: manager.cpp manager.h
		$(CC) manager.cpp -c

admInterface.o: admInterface.cpp admInterface.h
		$(CC) admInterface.cpp -c

main: main.cpp admInterface.o employee.o company.o manager.o
		$(CC) main.cpp admInterface.o employee.o company.o manager.o -o main

clear:
		rm *.o
		rm main
