all: gcs

gcs: gcs.o
	g++ gcs.o -o gcs


gcs.o: gcs.cpp
	g++ -c gcs.cpp

clean:
	rm -rf *.o gcs