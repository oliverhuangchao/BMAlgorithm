complier = g++ 
file = main
suffix = cpp

run:main.o  BMFunction.o getData.o
	$(complier) -o run main.o BMFunction.o getData.o

main.o:main.cpp
	$(complier) -c main.cpp

BMFunction.o:BMFunction.cpp BMFunction.h
	$(complier) -c BMFunction.cpp

getData.o:getData.cpp getData.h
	$(complier) -c getData.cpp

clean:
	rm -f *.o
	rm -f run
