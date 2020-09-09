output: main.o readMatrix.o determinant.o
	g++ main.o readMatrix.o determinant.o -g -o determinant

main.o: main.cpp
	g++ -c main.cpp

readMatrix.o: readMatrix.cpp readMatrix.hpp
	g++ -c readMatrix.cpp

determinant.o: determinant.cpp determinant.hpp
	g++ -c determinant.cpp

clean:
	rm *.o determinant
