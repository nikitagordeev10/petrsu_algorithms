all: number_decomposition

number_decomposition: number_decomposition.o
	g++ number_decomposition.o -o number_decomposition


number_decomposition.o: number_decomposition.cpp
	g++ -c number_decomposition.cpp

clean:
	rm -rf *.o number_decomposition