triangulo:	main.o TrianguloPascal.o
	g++ main.o TrianguloPascal.o -o TrianguloPascal
main.o:	main.cpp TrianguloPascal.h
	g++ -c main.cpp

triangulo.o:	TrianguloPascal.cpp TrianguloPascal.h
	g++ -c TrianguloPascal.cpp
